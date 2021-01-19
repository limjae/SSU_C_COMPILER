#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"

extern int syntax_err;
extern int semantic_err;
extern int gen_err;
extern A_NODE *root;

FILE *fout;

void initialize();
void print_ast();
void print_sem_ast();
void code_generation();
void semantic_analysis();

//from lex.yy
extern char *yytext;
extern FILE *yyin;
extern FILE *yyout;
FILE *genout;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must input a file\n");
        exit(1);
    }
    else if ((yyin = fopen(argv[argc - 1], "r")) == NULL)
    {
        printf("cannot open input file: %s\n", argv[argc - 1]);
        exit(1);
    }

    char syn_dest[30];
    char sem_dest[30];
    char gen_dest[30];
    strcpy(syn_dest,strtok(argv[argc - 1], "."));
    strcpy(sem_dest,strtok(argv[argc - 1], "."));
    strcpy(gen_dest,strtok(argv[argc - 1], "."));

    int inputlength = strlen(argv[argc - 1]);

    printf("%s\n",syn_dest);

    initialize();
    yyparse();
    yyout = fopen(strcat(syn_dest, "_syn.txt"), "w");
    printf("%s open\n", syn_dest);
    if (syntax_err)
    {
        fclose(yyout);
        exit(1);
    }
    print_ast(root);
    fclose(yyout);
    printf("%s out\n\n", syn_dest);

    printf("========================================\n");

    yyout = fopen(strcat(sem_dest, "_sem.txt"), "w");
    printf("%s open\n", sem_dest);
    semantic_analysis(root);
    if (semantic_err)
    {
        fclose(sem_dest);
        exit(1);
    }
    print_sem_ast(root);
    fclose(yyout);
    printf("%s out\n\n", sem_dest);

    printf("========================================\n");

    yyout = fopen(strcat(gen_dest, "_gen.txt"), "w");
    printf("%s open\n", gen_dest);
    code_generation(root);
    fclose(yyout);
    printf("%s out\n\n", gen_dest);

    yywrap();

    return 0;
}
