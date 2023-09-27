#ifndef _yy_defines_h_
#define _yy_defines_h_

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
extern YYLTYPE yylloc;

#endif /* _yy_defines_h_ */
