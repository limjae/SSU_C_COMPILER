# SSU_C_COMPILER
  
2020학년 2학기 컴파일러 수업 중 yacc과 lex를 이용한 컴파일러 실습  
  
SSU 2020 Fall semester Term project  
Covers Simple C compiler with Yacc and Lex  
Includes Syntax analysis, Semantic analysis, and code generation(for virtual machine that used in lecture)  

Compiler is based on old version of C compiler, may have some errors when you test it.
Some grammers may not be covered because it's Simple C compiler (Ex. goto, switch, struct type, initializing grammers, and etc)

Tested on 32-bit Cygwin terminal, Bison and Flex must be installed.

---------------------------------------------------------------------------------------------------------------------------------
# About sources

func_syn.c : about syntax analysis  
func_sem.c : about semantic analysis  
func_gen.c : about code generation  

print_sem.c  
print_syn.c : printing test results  

SYN.l : lex file  
SYN.y : yacc file  

lex.yy.c  
type.h  
y.tab.c  
y.tab.h : create with lex and yacc includes syntax grammers, symbol tables

others - some testing examples

---------------------------------------------------------------------------------------------------------------------------------
# Compile Commands(in Cygwin)
  
$ yacc –d SYN.y  
$ lex SYN.l  
$ gcc func_syn.c func_sem.c func_gen.c lex.yy.c y.tab.c print_syn.c print_sem.c main.c  

# Testing Commands  (create code)
  
$ ./a.exe filename  
Ex. $ ./a.exe test1.c  

# Testing Commands (virtual machine)

$ ./virtual/virtual.exe filename_gen.txt
