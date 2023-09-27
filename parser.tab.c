/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20221106

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include<stdio.h>
#include "lex.yy.c"
int flag = 0;
#line 28 "parser.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
/* Default: YYLTYPE is the text position type. */
typedef struct YYLTYPE
{
    int first_line;
    int first_column;
    int last_line;
    int last_column;
    unsigned source;
} YYLTYPE;
#define YYLTYPE_IS_DECLARED 1
#endif
#define YYRHSLOC(rhs, k) ((rhs)[k])

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(YYLTYPE *loc, const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(&yylloc, msg)
#endif

extern int YYPARSE_DECL();

#define AND 257
#define ASSIGN 258
#define COLON 259
#define COMMA 260
#define DEF 261
#define DIV 262
#define DOT 263
#define ELSE 264
#define END 265
#define EQ 266
#define EXITLOOP 267
#define FLOAT 268
#define FLOAT_CONST 269
#define FORMAT 270
#define FROM 271
#define FUN 272
#define GE 273
#define GLOBAL 274
#define GT 275
#define ID 276
#define IF 277
#define INT 278
#define INT_CONST 279
#define LEFT_PAREN 280
#define LEFT_SQ_BKT 281
#define LE 282
#define LT 283
#define MINUS 284
#define MOD 285
#define MULT 286
#define NE 287
#define NOT 288
#define NUL 289
#define OR 290
#define PLUS 291
#define PRINT 292
#define PRODUCT 293
#define READ 294
#define RETURN 295
#define RETURNS 296
#define RIGHT_PAREN 297
#define RIGHT_SQ_BKT 298
#define SEMICOLON 299
#define SKIP 300
#define STEP 301
#define STRING 302
#define TO 303
#define WHILE 304
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    2,    2,    4,    4,    6,    6,    6,    7,
    7,   10,   11,   11,   12,   12,    8,    8,    8,    8,
    8,    8,    9,    5,   13,   14,   14,   16,   16,   17,
   17,   18,   15,   15,    3,    3,   19,   19,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   21,   31,
   31,   22,   23,   23,   24,   35,   35,   25,   26,   36,
   36,   27,   28,   38,   38,   29,   30,   33,   39,   39,
   40,   40,   34,   34,   34,   34,   34,   41,   41,   41,
   41,   41,   41,   32,   32,   32,   32,   32,   32,   32,
   32,   32,   32,   32,   32,   42,   42,   37,   37,
};
static const YYINT yylen[] = {                            2,
    1,    4,    2,    3,    3,    3,    5,    3,    1,    3,
    1,    2,    1,    0,    4,    3,    1,    1,    1,    1,
    1,    1,    5,    5,    1,    1,    0,    5,    3,    3,
    1,    2,    2,    0,    1,    1,    3,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    1,
    3,    3,    2,    3,    6,    2,    0,    5,   10,    2,
    0,    5,    2,    1,    0,    1,    1,    2,    1,    0,
    4,    3,    3,    3,    2,    3,    3,    1,    1,    1,
    1,    1,    1,    3,    3,    3,    3,    2,    2,    3,
    3,    1,    5,    1,    1,    1,    0,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,    0,    0,    0,    0,
    9,    0,   25,    0,    0,   66,    0,    0,    0,    0,
    0,    0,    0,   67,    0,    0,    0,    0,   39,   40,
   41,   42,   43,   44,   45,   46,   47,   48,    0,    0,
    3,    0,    0,   12,    0,    5,    0,    0,    0,    0,
    0,    0,    0,    0,   31,    0,    0,   68,    0,   95,
   94,    0,    0,    0,    0,    0,   92,    0,    0,    0,
   53,    0,    0,    0,   63,    0,    2,    0,    0,    0,
    0,    0,    0,    0,    0,   18,    0,   17,   20,   19,
    8,   21,   10,   32,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   75,    0,    0,    0,   78,
   81,   82,   79,   80,    0,    0,   83,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   37,    0,   51,
    0,   16,    0,    0,    0,    0,   29,   30,    0,   72,
    0,    0,   91,   76,    0,   90,    0,    0,    0,    0,
   74,    0,   38,   73,    0,    0,    0,   23,   15,    7,
    0,   24,    0,    0,   71,    0,    0,    0,    0,    0,
   62,   58,   33,   28,    0,   93,    0,   55,    0,    0,
    0,    0,    0,    0,   59,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  274,  306,  307,  261,  272,  308,  310,  276,  312,  313,
  315,  316,  276,  311,  319,  267,  271,  276,  277,  280,
  292,  294,  295,  300,  304,  309,  325,  326,  327,  328,
  329,  330,  331,  332,  333,  334,  335,  336,  337,  339,
  308,  258,  281,  317,  318,  265,  299,  259,  260,  265,
  276,  320,  322,  323,  324,  339,  281,  345,  346,  269,
  279,  280,  284,  288,  291,  338,  339,  340,  276,  270,
  302,  270,  280,  338,  344,  340,  265,  299,  258,  263,
  293,  279,  281,  276,  313,  268,  276,  278,  289,  302,
  314,  315,  313,  317,  296,  299,  259,  260,  258,  338,
  281,  276,  338,  340,  338,  340,  338,  262,  263,  266,
  273,  275,  282,  283,  284,  285,  287,  291,  347,  257,
  259,  290,  259,  338,  338,  338,  259,  326,  338,  337,
  312,  298,  279,  259,  314,  323,  314,  324,  338,  298,
  338,  259,  297,  297,  338,  338,  338,  338,  338,  338,
  340,  325,  326,  340,  338,  343,  325,  265,  298,  314,
  308,  321,  259,  303,  298,  343,  348,  264,  341,  260,
  297,  265,  309,  314,  338,  297,  325,  265,  338,  301,
  342,  338,  259,  309,  265,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          2,
    3,    6,   26,    7,   14,    9,   10,   91,   92,   12,
   44,   45,   15,   52,  162,   53,   54,   55,   27,   28,
   29,   30,   31,   32,   33,   34,   35,   36,   37,   38,
   39,   66,   67,   68,  169,  181,  156,   75,   58,   59,
  119,  167,
};
static const YYINT yysindex[] = {                      -267,
 -150,    0,    0, -262, -254,  163, -150, -191, -228, -235,
    0, -226,    0, -227, -198,    0, -123, -186,  248, -117,
 -240, -103,  274,    0,  248,  -96, -172,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -82,  -74,
    0,  -86,  -75,    0,  -64,    0,  -60,   21,  -60,    0,
  -57,  -68,  -63, -239,    0,  -17,  274,    0,  -37,    0,
    0,  261,  274,  248,  274,  238,    0, -244,  -12,  274,
    0,  274,  287,  -42,    0,  -76,    0,  163,  274, -123,
 -262,  -48,  -28,  -57,   -7,    0,   -4,    0,    0,    0,
    0,    0,    0,    0,   21, -198,   21, -198,  274, -181,
  274, -174,  186, -231,  -40,    0,  -40,  274,  274,    0,
    0,    0,    0,    0,  274,  274,    0,  274,  274,  248,
  163,  248,  274,  -42,  -42,  -89,  163,    0,  -42,    0,
 -190,    0,  -45,   21, -150, -146,    0,    0, -230,    0,
 -179,  274,    0,    0,   -2,    0,  -40,   -2,  -40,  -42,
    0, -260,    0,    0,  -42, -233, -149,    0,    0,    0,
  163,    0,   21,  274,    0,    2,  -38,  163,    1,  274,
    0,    0,    0,    0, -193,    0, -172,    0,  -42,  274,
    6,  -42,  163,    3,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0, -128,    0,    0,
    0,    8,    0,    0,  -23,    0,    0, -119,    0,    0,
    0,    0, -176,    0,    0,    0,    4,  -90,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   23,
    0,    0,    0,    0,  -62,    0,    0,    0,    0, -143,
 -128,    0,  -11,    0,    0,    0,    0,    0,  -72,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -139,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -128,    0,    0, -236,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  212,    0,    0,   47,    0,   76,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -129,  -65,    0,    0,    0,  -59,    0,
    0,    0,    0,    0,   14,    0,    0,    0,    0,    0,
    0,  -10,    0,    0,  -27,    0,  105,   18,  134, -241,
    0,   25,    0,    0, -232,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   -9,    0,    0,    0,    0,
    0,    0,    0,    0,   27,    0,   29,    0, -229,    0,
    0,   33,    0,    0,    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
    0,   -5, -138,    0,    0,  214,  -30,  -87,   -1,    0,
  245,    0,    0,    0,    0,    0,  202,  216, -115,  -69,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  244,  -22,   -6,  -20,    0,    0,  176,    0,    0,    0,
    0,    0,
};
#define YYTABLESIZE 578
static const YYINT yytable[] = {                         40,
   74,   41,   11,  168,   76,  152,    1,  135,  128,  137,
   56,  157,  120,    8,  121,   77,   85,   77,   93,   97,
   98,   13,  173,   48,   22,  120,  170,   99,   22,   70,
   98,  108,  109,   49,  100,   22,   46,   50,   78,  103,
  105,  104,  107,  106,  184,  122,  160,  124,   77,  125,
  126,  153,  177,  115,  116,   77,  129,  153,  122,   22,
  118,   71,   22,  171,   99,  144,   42,   98,  108,  109,
   47,   40,  164,   40,  158,  174,  139,   51,  141,   11,
  108,  109,  108,  109,  142,  145,  146,   65,   65,   43,
  115,  116,  147,  148,   57,  149,  150,  118,  153,  151,
  155,  154,  115,  116,  115,  116,   57,  180,   47,  118,
    4,  118,  163,   98,   40,  172,  140,    6,  165,  155,
   40,    5,   65,    4,   64,   64,   78,    4,    6,  161,
   14,   14,    4,    4,   54,   54,    4,   70,   70,   70,
   70,  175,   70,   70,   70,   70,   70,  179,    4,   78,
    4,    4,   18,   70,   40,   70,    4,  182,   69,   64,
    4,   40,   70,   70,   70,   70,   72,   70,   77,   54,
   70,   70,  108,  109,   36,   79,   40,   70,   70,   70,
  120,   70,  127,   70,   69,   69,   69,   69,   80,   69,
   69,   69,   69,   69,  115,  116,   13,   13,   52,   52,
   69,  118,   69,   82,   49,   49,   81,  143,   38,   69,
   69,   69,   69,  122,   69,   84,   83,   69,   69,  108,
  109,  108,  109,   43,   69,   69,   69,   95,   69,   86,
   69,   86,   86,   52,   86,   96,   86,   86,   86,   49,
   99,  115,  116,  101,  116,   86,  123,   86,  118,  132,
  133,  134,  159,   42,   86,   86,   86,   86,  176,   86,
  109,  170,   86,   86,  183,  178,   11,  185,   35,   86,
   86,   86,   27,   86,   87,   86,   87,   87,   34,   87,
   50,   87,   87,   87,   26,   61,   97,   96,   86,   57,
   87,   60,   87,   56,  131,   94,   87,  136,   88,   87,
   87,   87,   87,   88,   87,   88,   88,   87,   87,   89,
   88,   88,   88,  138,   87,   87,   87,  166,   87,   88,
   87,   88,   90,  130,    0,    0,    0,    0,   88,   88,
   88,    0,   89,   88,   89,   89,   88,   88,    0,   89,
   89,   89,    0,   88,   88,   88,    0,   88,   89,   88,
   89,    0,    0,    0,    0,    0,    0,   89,   89,   89,
    0,   85,   89,   85,   85,   89,   89,    0,   85,   85,
   85,    0,   89,   89,   89,    0,   89,   85,   89,   85,
    0,    0,    0,    0,    0,    0,   85,   85,   85,    0,
   84,   85,   84,   84,   85,   85,    0,   84,   84,   84,
    0,   85,   85,   85,    0,   85,   84,   85,   84,    0,
    0,    0,    0,    0,    0,   84,   84,   84,    0,    0,
   84,    0,    0,   84,   84,    0,    0,    0,    0,   16,
   84,   84,   84,   17,   84,    0,   84,    0,   18,   19,
    0,    0,   20,    0,    0,    0,    0,  108,  109,    0,
    0,  110,    0,    0,   21,    0,   22,   23,  111,    0,
  112,    0,   24,    0,    0,    0,   25,  113,  114,  115,
  116,    0,  117,   70,   70,    0,  118,   70,    0,    0,
    0,    0,  143,    0,   70,    0,   70,    0,    0,    0,
    0,    0,    0,   70,   70,   70,   70,    0,   70,  108,
  109,    0,   70,  110,    0,    0,    0,    0,   70,    0,
  111,    0,  112,    0,    0,    0,   60,    0,    0,  113,
  114,  115,  116,   18,  117,    0,   61,   62,  118,   60,
    0,   63,    0,    0,    0,   64,  102,    0,   65,   61,
   62,    0,   60,    0,   63,    0,    0,    0,   64,   18,
    0,   65,   61,   73,    0,   60,    0,   63,    0,    0,
    0,    0,  102,    0,   65,   61,   73,    0,    0,    0,
   63,    0,    0,    0,    0,    0,    0,   65,
};
static const YYINT yycheck[] = {                          6,
   23,    7,    4,  264,   25,  121,  274,   95,   78,   97,
   17,  127,  257,  276,  259,  257,   47,  259,   49,  259,
  260,  276,  161,  259,  261,  257,  260,  260,  265,  270,
  260,  262,  263,  260,   57,  272,  265,  265,  299,   62,
   63,   62,   65,   64,  183,  290,  134,   70,  290,   72,
   73,  121,  168,  284,  285,  297,   79,  127,  290,  296,
  291,  302,  299,  297,  297,  297,  258,  297,  262,  263,
  299,   78,  303,   80,  265,  163,   99,  276,  101,   81,
  262,  263,  262,  263,  259,  108,  109,  264,  265,  281,
  284,  285,  115,  116,  281,  118,  119,  291,  168,  120,
  123,  122,  284,  285,  284,  285,  281,  301,  299,  291,
  261,  291,  259,  260,  121,  265,  298,  261,  298,  142,
  127,  272,  299,  267,  264,  265,  299,  271,  272,  135,
  259,  260,  276,  277,  264,  265,  280,  257,  258,  259,
  260,  164,  262,  263,  264,  265,  266,  170,  292,  299,
  294,  295,  276,  273,  161,  275,  300,  180,  276,  299,
  304,  168,  282,  283,  284,  285,  270,  287,  265,  299,
  290,  291,  262,  263,  265,  258,  183,  297,  298,  299,
  257,  301,  259,  303,  257,  258,  259,  260,  263,  262,
  263,  264,  265,  266,  284,  285,  259,  260,  264,  265,
  273,  291,  275,  279,  264,  265,  293,  297,  299,  282,
  283,  284,  285,  290,  287,  276,  281,  290,  291,  262,
  263,  262,  263,  281,  297,  298,  299,  296,  301,  257,
  303,  259,  260,  299,  262,  299,  264,  265,  266,  299,
  258,  284,  285,  281,  285,  273,  259,  275,  291,  298,
  279,  259,  298,  258,  282,  283,  284,  285,  297,  287,
  263,  260,  290,  291,  259,  265,  259,  265,  265,  297,
  298,  299,  296,  301,  257,  303,  259,  260,  265,  262,
  258,  264,  265,  266,  296,  259,  297,  297,  268,  265,
  273,  259,  275,  265,   81,   51,  276,   96,  278,  282,
  283,  284,  285,  257,  287,  259,  260,  290,  291,  289,
  264,  265,  266,   98,  297,  298,  299,  142,  301,  273,
  303,  275,  302,   80,   -1,   -1,   -1,   -1,  282,  283,
  284,   -1,  257,  287,  259,  260,  290,  291,   -1,  264,
  265,  266,   -1,  297,  298,  299,   -1,  301,  273,  303,
  275,   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,  284,
   -1,  257,  287,  259,  260,  290,  291,   -1,  264,  265,
  266,   -1,  297,  298,  299,   -1,  301,  273,  303,  275,
   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,  284,   -1,
  257,  287,  259,  260,  290,  291,   -1,  264,  265,  266,
   -1,  297,  298,  299,   -1,  301,  273,  303,  275,   -1,
   -1,   -1,   -1,   -1,   -1,  282,  283,  284,   -1,   -1,
  287,   -1,   -1,  290,  291,   -1,   -1,   -1,   -1,  267,
  297,  298,  299,  271,  301,   -1,  303,   -1,  276,  277,
   -1,   -1,  280,   -1,   -1,   -1,   -1,  262,  263,   -1,
   -1,  266,   -1,   -1,  292,   -1,  294,  295,  273,   -1,
  275,   -1,  300,   -1,   -1,   -1,  304,  282,  283,  284,
  285,   -1,  287,  262,  263,   -1,  291,  266,   -1,   -1,
   -1,   -1,  297,   -1,  273,   -1,  275,   -1,   -1,   -1,
   -1,   -1,   -1,  282,  283,  284,  285,   -1,  287,  262,
  263,   -1,  291,  266,   -1,   -1,   -1,   -1,  297,   -1,
  273,   -1,  275,   -1,   -1,   -1,  269,   -1,   -1,  282,
  283,  284,  285,  276,  287,   -1,  279,  280,  291,  269,
   -1,  284,   -1,   -1,   -1,  288,  276,   -1,  291,  279,
  280,   -1,  269,   -1,  284,   -1,   -1,   -1,  288,  276,
   -1,  291,  279,  280,   -1,  269,   -1,  284,   -1,   -1,
   -1,   -1,  276,   -1,  291,  279,  280,   -1,   -1,   -1,
  284,   -1,   -1,   -1,   -1,   -1,   -1,  291,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,
};
#endif
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 304
#define YYUNDFTOKEN 349
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","AND","ASSIGN","COLON","COMMA",
"DEF","DIV","DOT","ELSE","END","EQ","EXITLOOP","FLOAT","FLOAT_CONST","FORMAT",
"FROM","FUN","GE","GLOBAL","GT","ID","IF","INT","INT_CONST","LEFT_PAREN",
"LEFT_SQ_BKT","LE","LT","MINUS","MOD","MULT","NE","NOT","NUL","OR","PLUS",
"PRINT","PRODUCT","READ","RETURN","RETURNS","RIGHT_PAREN","RIGHT_SQ_BKT",
"SEMICOLON","SKIP","STEP","STRING","TO","WHILE","$accept","S","prog","declList",
"stmtListO","decl","funDef","typeList","varList","type","typeDef","var",
"sizeListO","sizeList","funID","fParamListO","funBody","fParamList","pList",
"idP","stmtList","stmt","assignmentStmt","readStmt","printStmt","ifStmt",
"whileStmt","loopStmt","callStmt","returnStmt","exitLoop","skip","dotId","exp",
"id","bExp","elsePart","stepPart","actParamList","expO","indxListO","indxList",
"relOP","actParamListO","illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : prog",
"prog : GLOBAL declList stmtListO END",
"declList : decl declList",
"declList : FUN funDef END",
"decl : DEF typeList END",
"decl : FUN funDef END",
"typeList : typeList SEMICOLON varList COLON type",
"typeList : varList COLON type",
"typeList : typeDef",
"varList : var COMMA varList",
"varList : var",
"var : ID sizeListO",
"sizeListO : sizeList",
"sizeListO :",
"sizeList : sizeList LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT",
"sizeList : LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT",
"type : INT",
"type : FLOAT",
"type : STRING",
"type : NUL",
"type : typeDef",
"type : ID",
"typeDef : ID ASSIGN PRODUCT typeList END",
"funDef : funID fParamListO RETURNS type funBody",
"funID : ID",
"fParamListO : fParamList",
"fParamListO :",
"fParamList : fParamList SEMICOLON pList COLON type",
"fParamList : pList COLON type",
"pList : pList COMMA idP",
"pList : idP",
"idP : ID sizeListO",
"funBody : declList stmtListO",
"funBody :",
"stmtListO : stmtList",
"stmtListO : stmt",
"stmtList : stmtList SEMICOLON stmt",
"stmtList : stmt",
"stmt : assignmentStmt",
"stmt : readStmt",
"stmt : printStmt",
"stmt : ifStmt",
"stmt : whileStmt",
"stmt : loopStmt",
"stmt : callStmt",
"stmt : returnStmt",
"stmt : exitLoop",
"stmt : skip",
"assignmentStmt : dotId ASSIGN exp",
"dotId : id",
"dotId : id DOT dotId",
"readStmt : READ FORMAT exp",
"printStmt : PRINT STRING",
"printStmt : PRINT FORMAT exp",
"ifStmt : IF bExp COLON stmtList elsePart END",
"elsePart : ELSE stmtList",
"elsePart :",
"whileStmt : WHILE bExp COLON stmtList END",
"loopStmt : FROM id ASSIGN exp TO exp stepPart COLON stmtListO END",
"stepPart : STEP exp",
"stepPart :",
"callStmt : LEFT_PAREN ID COLON actParamList RIGHT_PAREN",
"returnStmt : RETURN expO",
"expO : exp",
"expO :",
"exitLoop : EXITLOOP",
"skip : SKIP",
"id : ID indxListO",
"indxListO : indxList",
"indxListO :",
"indxList : indxList LEFT_SQ_BKT exp RIGHT_SQ_BKT",
"indxList : LEFT_SQ_BKT exp RIGHT_SQ_BKT",
"bExp : bExp OR bExp",
"bExp : bExp AND bExp",
"bExp : NOT bExp",
"bExp : LEFT_PAREN bExp RIGHT_PAREN",
"bExp : exp relOP exp",
"relOP : EQ",
"relOP : LE",
"relOP : LT",
"relOP : GE",
"relOP : GT",
"relOP : NE",
"exp : exp PLUS exp",
"exp : exp MINUS exp",
"exp : exp DIV exp",
"exp : exp MOD exp",
"exp : MINUS exp",
"exp : PLUS exp",
"exp : exp DOT exp",
"exp : LEFT_PAREN exp RIGHT_PAREN",
"exp : id",
"exp : LEFT_PAREN ID COLON actParamListO RIGHT_PAREN",
"exp : INT_CONST",
"exp : FLOAT_CONST",
"actParamListO : actParamList",
"actParamListO :",
"actParamList : actParamList COMMA exp",
"actParamList : exp",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 172 "parser.y"

void main() 
{
char filename[100];
printf("Enter the location of the file to be parsed: ");
scanf("%s",&filename);
printf("\n");

extern FILE *yyin;
yyin= fopen(filename,"r");
if(yyin == NULL)
{
 printf("Could not open file %s\n", filename);
 return;
}

yyparse();

if(flag==0)
{
printf("\nEntered program is valid \n\n"); 
}
}

int yyerror(){
return -1;
}
#line 754 "parser.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 1:
#line 26 "parser.y"
	{
 printf("Succesfully parsed");
 return 0;
 }
#line 1430 "parser.tab.c"
break;
case 2:
#line 31 "parser.y"
	{}
#line 1435 "parser.tab.c"
break;
case 3:
#line 33 "parser.y"
	{}
#line 1440 "parser.tab.c"
break;
case 4:
#line 34 "parser.y"
	{}
#line 1445 "parser.tab.c"
break;
case 5:
#line 36 "parser.y"
	{}
#line 1450 "parser.tab.c"
break;
case 6:
#line 37 "parser.y"
	{}
#line 1455 "parser.tab.c"
break;
case 7:
#line 39 "parser.y"
	{}
#line 1460 "parser.tab.c"
break;
case 8:
#line 40 "parser.y"
	{}
#line 1465 "parser.tab.c"
break;
case 9:
#line 41 "parser.y"
	{}
#line 1470 "parser.tab.c"
break;
case 10:
#line 43 "parser.y"
	{}
#line 1475 "parser.tab.c"
break;
case 11:
#line 44 "parser.y"
	{}
#line 1480 "parser.tab.c"
break;
case 12:
#line 46 "parser.y"
	{}
#line 1485 "parser.tab.c"
break;
case 13:
#line 48 "parser.y"
	{}
#line 1490 "parser.tab.c"
break;
case 14:
#line 49 "parser.y"
	{}
#line 1495 "parser.tab.c"
break;
case 15:
#line 51 "parser.y"
	{}
#line 1500 "parser.tab.c"
break;
case 16:
#line 52 "parser.y"
	{}
#line 1505 "parser.tab.c"
break;
case 17:
#line 54 "parser.y"
	{}
#line 1510 "parser.tab.c"
break;
case 18:
#line 55 "parser.y"
	{}
#line 1515 "parser.tab.c"
break;
case 19:
#line 56 "parser.y"
	{}
#line 1520 "parser.tab.c"
break;
case 20:
#line 57 "parser.y"
	{}
#line 1525 "parser.tab.c"
break;
case 21:
#line 58 "parser.y"
	{}
#line 1530 "parser.tab.c"
break;
case 22:
#line 59 "parser.y"
	{}
#line 1535 "parser.tab.c"
break;
case 23:
#line 61 "parser.y"
	{}
#line 1540 "parser.tab.c"
break;
case 24:
#line 63 "parser.y"
	{}
#line 1545 "parser.tab.c"
break;
case 25:
#line 65 "parser.y"
	{}
#line 1550 "parser.tab.c"
break;
case 26:
#line 67 "parser.y"
	{}
#line 1555 "parser.tab.c"
break;
case 27:
#line 68 "parser.y"
	{}
#line 1560 "parser.tab.c"
break;
case 28:
#line 70 "parser.y"
	{}
#line 1565 "parser.tab.c"
break;
case 29:
#line 71 "parser.y"
	{}
#line 1570 "parser.tab.c"
break;
case 30:
#line 73 "parser.y"
	{}
#line 1575 "parser.tab.c"
break;
case 31:
#line 74 "parser.y"
	{}
#line 1580 "parser.tab.c"
break;
case 32:
#line 76 "parser.y"
	{}
#line 1585 "parser.tab.c"
break;
case 33:
#line 78 "parser.y"
	{}
#line 1590 "parser.tab.c"
break;
case 34:
#line 79 "parser.y"
	{}
#line 1595 "parser.tab.c"
break;
case 35:
#line 81 "parser.y"
	{}
#line 1600 "parser.tab.c"
break;
case 36:
#line 82 "parser.y"
	{}
#line 1605 "parser.tab.c"
break;
case 37:
#line 84 "parser.y"
	{}
#line 1610 "parser.tab.c"
break;
case 38:
#line 85 "parser.y"
	{}
#line 1615 "parser.tab.c"
break;
case 39:
#line 87 "parser.y"
	{}
#line 1620 "parser.tab.c"
break;
case 40:
#line 88 "parser.y"
	{}
#line 1625 "parser.tab.c"
break;
case 41:
#line 89 "parser.y"
	{}
#line 1630 "parser.tab.c"
break;
case 42:
#line 90 "parser.y"
	{}
#line 1635 "parser.tab.c"
break;
case 43:
#line 91 "parser.y"
	{}
#line 1640 "parser.tab.c"
break;
case 44:
#line 92 "parser.y"
	{}
#line 1645 "parser.tab.c"
break;
case 45:
#line 93 "parser.y"
	{}
#line 1650 "parser.tab.c"
break;
case 46:
#line 94 "parser.y"
	{}
#line 1655 "parser.tab.c"
break;
case 47:
#line 95 "parser.y"
	{}
#line 1660 "parser.tab.c"
break;
case 48:
#line 96 "parser.y"
	{}
#line 1665 "parser.tab.c"
break;
case 49:
#line 98 "parser.y"
	{}
#line 1670 "parser.tab.c"
break;
case 50:
#line 100 "parser.y"
	{}
#line 1675 "parser.tab.c"
break;
case 51:
#line 101 "parser.y"
	{}
#line 1680 "parser.tab.c"
break;
case 52:
#line 103 "parser.y"
	{}
#line 1685 "parser.tab.c"
break;
case 53:
#line 105 "parser.y"
	{}
#line 1690 "parser.tab.c"
break;
case 54:
#line 106 "parser.y"
	{}
#line 1695 "parser.tab.c"
break;
case 55:
#line 108 "parser.y"
	{}
#line 1700 "parser.tab.c"
break;
case 56:
#line 110 "parser.y"
	{}
#line 1705 "parser.tab.c"
break;
case 57:
#line 111 "parser.y"
	{}
#line 1710 "parser.tab.c"
break;
case 58:
#line 113 "parser.y"
	{}
#line 1715 "parser.tab.c"
break;
case 59:
#line 115 "parser.y"
	{}
#line 1720 "parser.tab.c"
break;
case 60:
#line 117 "parser.y"
	{}
#line 1725 "parser.tab.c"
break;
case 61:
#line 118 "parser.y"
	{}
#line 1730 "parser.tab.c"
break;
case 62:
#line 120 "parser.y"
	{}
#line 1735 "parser.tab.c"
break;
case 63:
#line 122 "parser.y"
	{}
#line 1740 "parser.tab.c"
break;
case 64:
#line 124 "parser.y"
	{}
#line 1745 "parser.tab.c"
break;
case 65:
#line 125 "parser.y"
	{}
#line 1750 "parser.tab.c"
break;
case 66:
#line 127 "parser.y"
	{}
#line 1755 "parser.tab.c"
break;
case 67:
#line 129 "parser.y"
	{}
#line 1760 "parser.tab.c"
break;
case 68:
#line 131 "parser.y"
	{}
#line 1765 "parser.tab.c"
break;
case 69:
#line 133 "parser.y"
	{}
#line 1770 "parser.tab.c"
break;
case 70:
#line 134 "parser.y"
	{}
#line 1775 "parser.tab.c"
break;
case 71:
#line 136 "parser.y"
	{}
#line 1780 "parser.tab.c"
break;
case 72:
#line 137 "parser.y"
	{}
#line 1785 "parser.tab.c"
break;
case 73:
#line 139 "parser.y"
	{}
#line 1790 "parser.tab.c"
break;
case 74:
#line 140 "parser.y"
	{}
#line 1795 "parser.tab.c"
break;
case 75:
#line 141 "parser.y"
	{}
#line 1800 "parser.tab.c"
break;
case 76:
#line 142 "parser.y"
	{}
#line 1805 "parser.tab.c"
break;
case 77:
#line 143 "parser.y"
	{}
#line 1810 "parser.tab.c"
break;
case 78:
#line 145 "parser.y"
	{}
#line 1815 "parser.tab.c"
break;
case 79:
#line 146 "parser.y"
	{}
#line 1820 "parser.tab.c"
break;
case 80:
#line 147 "parser.y"
	{}
#line 1825 "parser.tab.c"
break;
case 81:
#line 148 "parser.y"
	{}
#line 1830 "parser.tab.c"
break;
case 82:
#line 149 "parser.y"
	{}
#line 1835 "parser.tab.c"
break;
case 83:
#line 150 "parser.y"
	{}
#line 1840 "parser.tab.c"
break;
case 84:
#line 152 "parser.y"
	{}
#line 1845 "parser.tab.c"
break;
case 85:
#line 153 "parser.y"
	{}
#line 1850 "parser.tab.c"
break;
case 86:
#line 154 "parser.y"
	{}
#line 1855 "parser.tab.c"
break;
case 87:
#line 155 "parser.y"
	{}
#line 1860 "parser.tab.c"
break;
case 88:
#line 156 "parser.y"
	{}
#line 1865 "parser.tab.c"
break;
case 89:
#line 157 "parser.y"
	{}
#line 1870 "parser.tab.c"
break;
case 90:
#line 158 "parser.y"
	{}
#line 1875 "parser.tab.c"
break;
case 91:
#line 159 "parser.y"
	{}
#line 1880 "parser.tab.c"
break;
case 92:
#line 160 "parser.y"
	{}
#line 1885 "parser.tab.c"
break;
case 93:
#line 161 "parser.y"
	{}
#line 1890 "parser.tab.c"
break;
case 94:
#line 162 "parser.y"
	{}
#line 1895 "parser.tab.c"
break;
case 95:
#line 163 "parser.y"
	{}
#line 1900 "parser.tab.c"
break;
case 96:
#line 165 "parser.y"
	{}
#line 1905 "parser.tab.c"
break;
case 97:
#line 166 "parser.y"
	{}
#line 1910 "parser.tab.c"
break;
case 98:
#line 168 "parser.y"
	{}
#line 1915 "parser.tab.c"
break;
case 99:
#line 169 "parser.y"
	{}
#line 1920 "parser.tab.c"
break;
#line 1922 "parser.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}
