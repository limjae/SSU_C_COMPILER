/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "MID.y" /* yacc.c:339  */

#include <stdio.h>
#include "type.h"

int yylex();

extern A_ID *current_id;
extern int syntax_err;
extern int line_no;
extern int current_level;
extern A_NODE *root;
extern A_TYPE *int_type, *char_type, *void_type, *float_type, *string_type;


#line 81 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   510

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    38,    39,    42,    43,    47,    46,    51,
      50,    56,    57,    60,    61,    64,    68,    69,    70,    71,
      75,    76,    77,    80,    81,    84,    85,    89,    90,    93,
      95,    98,   100,   104,   105,   106,   110,   111,   109,   113,
     114,   113,   116,   120,   121,   124,   125,   129,   133,   134,
     138,   142,   141,   144,   144,   146,   150,   151,   154,   155,
     155,   159,   160,   163,   164,   168,   169,   170,   172,   172,
     178,   179,   182,   183,   187,   188,   192,   194,   199,   200,
     203,   204,   205,   209,   210,   212,   214,   216,   221,   222,
     225,   227,   231,   232,   233,   234,   235,   236,   239,   241,
     245,   245,   251,   253,   257,   259,   261,   265,   267,   269,
     273,   277,   278,   281,   283,   285,   290,   291,   294,   296,
     300,   301,   304,   307,   310,   313,   314,   318,   321,   322,
     326,   327,   331,   334,   337,   340,   341,   343,   347,   348,
     350,   352,   354,   358,   361,   362,   364,   368,   369,   371,
     374,   379,   380,   384,   385,   387,   389,   391,   393,   395,
     397,   399,   401,   405,   406,   408,   410,   412,   414,   416,
     420,   422,   423,   424,   426,   427,   430
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "CONST_SYM", "AUTO_SYM", "BREAK_SYM", "CASE_SYM",
  "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM", "ELSE_SYM", "ENUM_SYM",
  "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM", "STATIC_SYM",
  "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM", "WHILE_SYM",
  "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS", "GTR", "LEQ", "GEQ", "EQL",
  "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR",
  "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -223

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-223)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     445,  -223,  -223,  -223,    47,  -223,  -223,  -223,  -223,    21,
      42,    97,   445,  -223,  -223,  -223,    21,   482,   482,  -223,
      99,  -223,  -223,    53,    -4,    74,    90,   101,  -223,  -223,
    -223,    77,   109,  -223,   -14,  -223,  -223,   121,   131,   153,
      -4,  -223,   324,   154,   180,  -223,  -223,    21,   294,   153,
     155,  -223,  -223,  -223,   482,  -223,  -223,  -223,  -223,  -223,
     354,   384,   384,   264,   324,   324,   324,   324,   324,   157,
    -223,  -223,  -223,  -223,  -223,   163,   165,  -223,  -223,  -223,
      88,   139,  -223,    83,   138,  -223,   146,    17,  -223,   180,
     147,    58,  -223,  -223,   150,   294,  -223,  -223,  -223,  -223,
      25,   482,    20,   167,  -223,   164,  -223,   264,  -223,   324,
    -223,  -223,   116,   170,   173,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,  -223,  -223,   216,   324,
     324,   217,    71,   169,  -223,   180,  -223,    80,    25,    21,
      87,  -223,   210,   482,  -223,    21,   419,   324,  -223,    93,
    -223,  -223,   103,  -223,   471,   186,   104,   122,  -223,  -223,
     324,   165,  -223,   139,   139,  -223,  -223,  -223,  -223,   138,
     138,  -223,  -223,  -223,  -223,  -223,   195,   192,  -223,   198,
    -223,  -223,   324,  -223,  -223,   294,   151,    15,  -223,  -223,
    -223,  -223,   188,   324,   189,   199,   210,   204,   207,   324,
     208,   209,  -223,   206,   210,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,   201,  -223,   211,   212,   213,   103,   482,   324,
    -223,  -223,  -223,  -223,  -223,   324,  -223,  -223,  -223,  -223,
      21,  -223,  -223,   215,  -223,   210,   230,   324,   324,   219,
    -223,   324,   324,  -223,  -223,  -223,  -223,  -223,  -223,   221,
     232,  -223,  -223,   210,  -223,   218,   235,   223,   237,  -223,
     238,   239,  -223,  -223,  -223,   324,   210,   324,   210,   210,
     210,   241,  -223,   229,   268,  -223,  -223,   234,   324,   210,
    -223,  -223,  -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    20,    53,    21,    43,    22,    44,     0,
      63,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    55,     0,     0,    64,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,     0,     0,    66,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   171,   172,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,     0,   161,     0,
     154,   155,    78,     0,     0,   158,   151,   157,   156,   160,
     159,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   116,
       0,     0,     0,     0,    54,     0,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,     0,    70,    81,   176,   175,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,    30,     0,     0,     0,    48,    50,
      41,    46,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   102,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   162,   152,   165,     0,   164,    60,    32,    38,
       0,    47,   115,     0,   114,     0,     0,   111,     0,     0,
     112,     0,     0,   101,    91,   103,    86,    83,    84,     0,
       0,   119,    49,     0,    99,     0,     0,     0,     0,   113,
       0,     0,    87,    85,    98,     0,     0,   111,     0,     0,
       0,     0,   109,     0,   104,   106,   107,     0,   111,     0,
     108,   110,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,   279,  -223,  -223,  -223,  -223,  -223,   -64,
      10,  -223,  -223,  -223,   247,   -86,  -223,   -60,  -223,  -223,
    -223,  -223,  -223,  -223,   148,  -124,  -223,    55,  -223,  -223,
    -223,   214,   160,  -223,    -8,    -7,   -19,  -223,   -52,  -223,
    -223,   134,   194,  -112,  -118,  -223,  -223,   -94,  -223,    19,
    -223,  -223,  -223,  -223,  -223,  -222,  -223,  -223,  -223,  -142,
     -43,   -42,  -223,  -128,  -223,  -223,   185,   187,  -223,  -223,
    -223,    67,    52,  -223,    63,   -33,   -48,  -223,  -223,   202
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    43,
      26,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   249,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    27,   103,    28,    40,    97,    71,   184,    34,   146,
      16,   188,   108,   110,   111,   226,   116,   116,   116,   116,
     116,   113,    16,     1,     1,   267,   201,    35,    36,     2,
      -7,   115,   117,   118,   119,   120,    41,   154,    42,    94,
     149,   227,     4,    48,   225,   136,   137,   138,     6,   227,
      25,     8,    97,    71,   225,   283,     1,   139,    53,   140,
     156,     9,   157,   240,   141,   113,   291,   113,    98,   241,
      10,    10,   201,   112,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   260,   149,   223,
     149,     2,    10,     9,   158,   159,     1,    29,   189,   181,
     182,   183,    37,   144,     4,   167,   145,   261,     2,   238,
       6,   155,   246,     8,     3,    71,   191,   112,   -51,   145,
     254,     4,   116,   124,   125,   194,     5,     6,   195,     7,
       8,    46,   200,   156,    44,   157,   149,   233,   130,   131,
      40,   199,    45,   228,   166,   229,   157,    94,    27,   159,
     237,   264,    97,    71,    10,     2,   166,    47,   157,   167,
     243,    71,   166,   155,   157,   -36,    10,   250,     4,   274,
     126,   127,   128,   129,     6,    51,   259,     8,   175,   176,
     177,   178,   282,    90,   284,   285,   286,    71,   132,   133,
     134,   173,   174,   179,   180,   292,   239,    52,    89,    99,
     121,   122,   123,   135,   -59,   250,   268,    48,   163,   270,
     271,   169,   164,    55,   170,    56,    57,    58,    59,   185,
     190,   202,   203,   204,   205,   206,   192,   232,   207,   208,
     209,    60,   199,   281,   210,   250,   234,   211,    61,    62,
     235,   236,   242,   244,   247,   245,   250,   248,   251,   252,
      63,   253,   256,   257,    52,   255,   258,   265,   275,    64,
      65,   263,   272,    66,   212,    67,    68,    55,     2,    56,
      57,    58,    59,   269,     3,   273,   276,   277,   278,   279,
     280,     4,   287,   288,   289,    60,     5,     6,   290,     7,
       8,    30,    61,    62,    93,   262,   196,    55,   231,    56,
      57,    58,    59,   142,    63,   193,   168,   171,     0,   165,
     172,     0,     0,    64,    65,    60,     0,    66,     0,    67,
      68,     0,    61,    62,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,    63,     0,     0,     0,    95,     0,
       0,     0,     0,    64,    65,    60,     0,    66,     0,    67,
      68,     0,    61,    62,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,    63,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    60,     0,    66,     0,    67,
      68,     0,    61,    62,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    60,     0,    66,     0,    67,
      68,     0,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,   109,     0,     0,     0,     0,     3,
       0,     0,     0,    64,    65,     0,     4,    66,     0,    67,
      68,     5,     6,     0,     7,     8,     0,     0,     1,     2,
       0,     0,     0,     0,     0,     3,     0,     0,     0,   156,
       0,   157,     4,     0,     0,     0,     0,     5,     6,    10,
       7,     8,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     9,     2,     0,     4,     0,
       0,     0,     3,     5,     6,    10,     7,     8,     0,     4,
       0,     0,     0,     0,     5,     6,     0,     7,     8,     0,
     230
};

static const yytype_int16 yycheck[] =
{
      42,     9,    54,    10,    23,    48,    48,   135,    16,    95,
       0,   139,    60,    61,    62,   157,    64,    65,    66,    67,
      68,    63,    12,     3,     3,   247,   150,    17,    18,     4,
      44,    64,    65,    66,    67,    68,    40,   101,    42,    47,
     100,   159,    17,    57,   156,    28,    29,    30,    23,   167,
       3,    26,    95,    95,   166,   277,     3,    40,    39,    42,
      40,    40,    42,    48,    47,   107,   288,   109,    49,    54,
      50,    50,   196,    63,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   229,   148,   153,
     150,     4,    50,    40,   102,   102,     3,     0,   140,   132,
     133,   134,     3,    45,    17,   112,    48,   235,     4,   195,
      23,   101,   206,    26,    10,   157,    45,   107,    44,    48,
     214,    17,   170,    35,    36,    45,    22,    23,    48,    25,
      26,    54,    45,    40,    44,    42,   196,   170,    55,    56,
     159,   149,    41,    40,    40,    42,    42,   155,   156,   156,
     192,   245,   195,   195,    50,     4,    40,    48,    42,   166,
     203,   203,    40,   153,    42,    44,    50,   209,    17,   263,
      31,    32,    33,    34,    23,    44,   228,    26,   126,   127,
     128,   129,   276,     3,   278,   279,   280,   229,    50,    51,
      52,   124,   125,   130,   131,   289,    45,    44,    44,    44,
      43,    38,    37,    57,    57,   247,   248,    57,    41,   251,
     252,    41,    48,     3,    41,     5,     6,     7,     8,     3,
       3,    11,    12,    13,    14,    15,    57,    41,    18,    19,
      20,    21,   240,   275,    24,   277,    41,    27,    28,    29,
      48,    43,    54,    54,    40,    46,   288,    40,    40,    40,
      40,    45,    41,    41,    44,    54,    43,    27,    40,    49,
      50,    46,    41,    53,    54,    55,    56,     3,     4,     5,
       6,     7,     8,    54,    10,    43,    41,    54,    41,    41,
      41,    17,    41,    54,    16,    21,    22,    23,    54,    25,
      26,    12,    28,    29,    47,   240,   148,     3,   164,     5,
       6,     7,     8,    89,    40,   145,   112,   122,    -1,   107,
     123,    -1,    -1,    49,    50,    21,    -1,    53,    -1,    55,
      56,    -1,    28,    29,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    50,    21,    -1,    53,    -1,    55,
      56,    -1,    28,    29,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    21,    -1,    53,    -1,    55,
      56,    -1,    28,    29,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    21,    -1,    53,    -1,    55,
      56,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    40,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    49,    50,    -1,    17,    53,    -1,    55,
      56,    22,    23,    -1,    25,    26,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    40,
      -1,    42,    17,    -1,    -1,    -1,    -1,    22,    23,    50,
      25,    26,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    40,     4,    -1,    17,    -1,
      -1,    -1,    10,    22,    23,    50,    25,    26,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    -1,
      39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    10,    17,    22,    23,    25,    26,    40,
      50,    59,    60,    61,    62,    67,    68,    69,    75,    76,
      81,    86,    92,    93,    94,     3,    88,    92,    93,     0,
      61,    70,    71,    72,    92,    68,    68,     3,    79,    64,
      94,    40,    42,    87,    44,    41,    54,    48,    57,    63,
      77,    44,    44,   107,    95,     3,     5,     6,     7,     8,
      21,    28,    29,    40,    49,    50,    53,    55,    56,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    44,
       3,    89,    90,    72,    92,    44,    73,   118,   107,    44,
      80,   108,    68,    96,    97,    98,    99,    40,   134,    40,
     134,   134,    68,   119,   137,   133,   134,   133,   133,   133,
     133,    43,    38,    37,    35,    36,    31,    32,    33,    34,
      55,    56,    50,    51,    52,    57,    28,    29,    30,    40,
      42,    47,    89,    91,    45,    48,    73,    74,    78,    75,
      82,    83,    65,    66,    67,    68,    40,    42,    92,    93,
     100,   101,   102,    41,    48,   137,    40,    93,   100,    41,
      41,   124,   125,   129,   129,   130,   130,   130,   130,   132,
     132,   133,   133,   133,   121,     3,   115,   116,   121,   119,
       3,    45,    57,    90,    45,    48,    82,    84,    85,    92,
      45,    83,    11,    12,    13,    14,    15,    18,    19,    20,
      24,    27,    54,   103,   104,   105,   106,   107,   109,   110,
     111,   114,   119,    67,    96,   101,   117,   102,    40,    42,
      39,    99,    41,   133,    41,    48,    43,   119,    73,    45,
      48,    54,    54,   118,    54,    46,   105,    40,    40,   113,
     119,    40,    40,    45,   105,    54,    41,    41,    43,    96,
     117,   121,    85,    46,   105,    27,   112,   113,   119,    54,
     119,   119,    41,    43,   105,    40,    41,    54,    41,    41,
      41,   119,   105,   113,   105,   105,   105,    41,    54,    16,
      54,   113,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    77,    78,    76,    79,
      80,    76,    76,    81,    81,    82,    82,    83,    84,    84,
      85,    87,    86,    88,    86,    86,    89,    89,    90,    91,
      90,    92,    92,    93,    93,    94,    94,    94,    95,    94,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     108,   107,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 35 "MID.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL); checkForwardReference();}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "MID.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 49 "MID.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));current_id=(yyvsp[-2]);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "MID.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "MID.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));current_id=(yyvsp[-2]);}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "MID.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "MID.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "MID.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "MID.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "MID.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "MID.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 77 "MID.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 84 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 86 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "MID.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 94 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 95 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 101 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "MID.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "MID.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "MID.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 111 "MID.y" /* yacc.c:1646  */
    { (yyval)=current_id;current_level++;}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 112 "MID.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));current_level--;current_id=(yyvsp[-2]);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 113 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "MID.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 115 "MID.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));current_level--;current_id=(yyvsp[-2]);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 117 "MID.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 120 "MID.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 121 "MID.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 124 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 130 "MID.y" /* yacc.c:1646  */
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 142 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 143 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 144 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 145 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 147 "MID.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 150 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 151 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 154 "MID.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 155 "MID.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 156 "MID.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 159 "MID.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 160 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 163 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 165 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 168 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 169 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 171 "MID.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 172 "MID.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 174 "MID.y" /* yacc.c:1646  */
    {checkForwardReference();current_id=(yyvsp[-2]);current_level--;
(yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 178 "MID.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 179 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 182 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 184 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 187 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 189 "MID.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 193 "MID.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 195 "MID.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]))
;}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 199 "MID.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 200 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 203 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 204 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 206 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 209 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 211 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 213 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 215 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 217 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 221 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 222 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 226 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 228 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 231 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 232 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 233 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 234 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 235 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 236 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 240 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 242 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 245 "MID.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 247 "MID.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-2]),NIL,(yyvsp[-1]));current_id=(yyvsp[-3]);
current_level--;}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 252 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 254 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 258 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 260 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 262 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 266 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 268 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 270 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 274 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 277 "MID.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 278 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 282 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 284 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 286 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 290 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 291 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 295 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 297 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 300 "MID.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 301 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 304 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 307 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 310 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 313 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 315 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 318 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 321 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 323 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 326 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 328 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 331 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 334 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 337 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 340 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 342 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 344 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 347 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 349 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 351 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 353 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 355 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 358 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 361 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 363 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 365 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 368 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 370 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 372 "MID.y" /* yacc.c:1646  */
    {(yyval)=
makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 375 "MID.y" /* yacc.c:1646  */
    {(yyval)=
makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 379 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 381 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 384 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 386 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 388 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 390 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 392 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 394 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 396 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 398 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 400 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 402 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 405 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 407 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 409 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 411 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 413 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 415 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 417 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 421 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 422 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 423 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 425 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 426 "MID.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[0]),NIL);}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 427 "MID.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 431 "MID.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2662 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 433 "MID.y" /* yacc.c:1906  */


extern char *yytext;

void yyerror (char *s) 
{
    printf("line %d: %s near %s\n", line_no,s,yytext);
}
