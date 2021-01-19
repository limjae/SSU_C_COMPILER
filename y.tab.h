/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    INTEGER_CONSTANT = 260,
    FLOAT_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    CONST_SYM = 264,
    AUTO_SYM = 265,
    BREAK_SYM = 266,
    CASE_SYM = 267,
    CONTINUE_SYM = 268,
    DEFAULT_SYM = 269,
    DO_SYM = 270,
    ELSE_SYM = 271,
    ENUM_SYM = 272,
    FOR_SYM = 273,
    IF_SYM = 274,
    RETURN_SYM = 275,
    SIZEOF_SYM = 276,
    STATIC_SYM = 277,
    STRUCT_SYM = 278,
    SWITCH_SYM = 279,
    TYPEDEF_SYM = 280,
    UNION_SYM = 281,
    WHILE_SYM = 282,
    PLUSPLUS = 283,
    MINUSMINUS = 284,
    ARROW = 285,
    LSS = 286,
    GTR = 287,
    LEQ = 288,
    GEQ = 289,
    EQL = 290,
    NEQ = 291,
    AMPAMP = 292,
    BARBAR = 293,
    DOTDOTDOT = 294,
    LP = 295,
    RP = 296,
    LB = 297,
    RB = 298,
    LR = 299,
    RR = 300,
    COLON = 301,
    PERIOD = 302,
    COMMA = 303,
    EXCL = 304,
    STAR = 305,
    SLASH = 306,
    PERCENT = 307,
    AMP = 308,
    SEMICOLON = 309,
    PLUS = 310,
    MINUS = 311,
    ASSIGN = 312
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define INTEGER_CONSTANT 260
#define FLOAT_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define CONST_SYM 264
#define AUTO_SYM 265
#define BREAK_SYM 266
#define CASE_SYM 267
#define CONTINUE_SYM 268
#define DEFAULT_SYM 269
#define DO_SYM 270
#define ELSE_SYM 271
#define ENUM_SYM 272
#define FOR_SYM 273
#define IF_SYM 274
#define RETURN_SYM 275
#define SIZEOF_SYM 276
#define STATIC_SYM 277
#define STRUCT_SYM 278
#define SWITCH_SYM 279
#define TYPEDEF_SYM 280
#define UNION_SYM 281
#define WHILE_SYM 282
#define PLUSPLUS 283
#define MINUSMINUS 284
#define ARROW 285
#define LSS 286
#define GTR 287
#define LEQ 288
#define GEQ 289
#define EQL 290
#define NEQ 291
#define AMPAMP 292
#define BARBAR 293
#define DOTDOTDOT 294
#define LP 295
#define RP 296
#define LB 297
#define RB 298
#define LR 299
#define RR 300
#define COLON 301
#define PERIOD 302
#define COMMA 303
#define EXCL 304
#define STAR 305
#define SLASH 306
#define PERCENT 307
#define AMP 308
#define SEMICOLON 309
#define PLUS 310
#define MINUS 311
#define ASSIGN 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
