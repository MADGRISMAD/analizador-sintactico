/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMERO = 258,                  /* NUMERO  */
    OPEN = 259,                    /* OPEN  */
    UPDATE = 260,                  /* UPDATE  */
    ADD = 261,                     /* ADD  */
    INSERT = 262,                  /* INSERT  */
    WARNING = 263,                 /* WARNING  */
    ALIGN = 264,                   /* ALIGN  */
    CONTINUE = 265,                /* CONTINUE  */
    ANALOGREAD = 266,              /* ANALOGREAD  */
    ANALOGREFERENCE = 267,         /* ANALOGREFERENCE  */
    ANALOGWRITE = 268,             /* ANALOGWRITE  */
    DOCUMENTID = 269,              /* DOCUMENTID  */
    FILETYPEFILETYPEEXTENSION = 270, /* FILETYPEFILETYPEEXTENSION  */
    INSTANCEID = 271,              /* INSTANCEID  */
    LINEARIZEDMIMETYPE = 272,      /* LINEARIZEDMIMETYPE  */
    PAGECOUNT = 273,               /* PAGECOUNT  */
    PAGELAYOUTPDFVERSION = 274,    /* PAGELAYOUTPDFVERSION  */
    TAGGEDPDF = 275,               /* TAGGEDPDF  */
    XMPTOOLKIT = 276,              /* XMPTOOLKIT  */
    ARRAY = 277,                   /* ARRAY  */
    NOTONE = 278,                  /* NOTONE  */
    PULSEIN = 279,                 /* PULSEIN  */
    SHIFTIN = 280,                 /* SHIFTIN  */
    SHIFTOUT = 281,                /* SHIFTOUT  */
    TONE = 282,                    /* TONE  */
    BOOL_LITERAL = 283,            /* BOOL_LITERAL  */
    DEL = 284,                     /* DEL  */
    CLOSE = 285,                   /* CLOSE  */
    FINALLY = 286,                 /* FINALLY  */
    ASYNC = 287,                   /* ASYNC  */
    DO = 288,                      /* DO  */
    FOR = 289,                     /* FOR  */
    WHILE = 290,                   /* WHILE  */
    CLASS = 291,                   /* CLASS  */
    SQL = 292,                     /* SQL  */
    COLOR = 293,                   /* COLOR  */
    ADJUSTFIELD = 294,             /* ADJUSTFIELD  */
    BASEFIELD = 295,               /* BASEFIELD  */
    FLOATFIELD = 296,              /* FLOATFIELD  */
    AS = 297,                      /* AS  */
    CROSSJOIN = 298,               /* CROSSJOIN  */
    DISTINCTEXCEPT = 299,          /* DISTINCTEXCEPT  */
    FULLOUTERJOIN = 300,           /* FULLOUTERJOIN  */
    JOIN = 301,                    /* JOIN  */
    LIKE = 302,                    /* LIKE  */
    WHEN = 303,                    /* WHEN  */
    WHERE = 304,                   /* WHERE  */
    BOOLEAN = 305,                 /* BOOLEAN  */
    MATH = 306,                    /* MATH  */
    MATH_E = 307,                  /* MATH_E  */
    MATH_LN10 = 308,               /* MATH_LN10  */
    MATH_LN2 = 309,                /* MATH_LN2  */
    MATH_LOG10E = 310,             /* MATH_LOG10E  */
    MATH_LOG2E = 311,              /* MATH_LOG2E  */
    MATH_PIMATH_SQRT1 = 312,       /* MATH_PIMATH_SQRT1  */
    MATH_SQRT2 = 313,              /* MATH_SQRT2  */
    R_BRACKET = 314,               /* R_BRACKET  */
    L_BRACKET = 315,               /* L_BRACKET  */
    TBODY = 316,                   /* TBODY  */
    GLOBAL = 317,                  /* GLOBAL  */
    VAL = 318,                     /* VAL  */
    VAR = 319,                     /* VAR  */
    LET = 320,                     /* LET  */
    FILL = 321,                    /* FILL  */
    PRECISION = 322,               /* PRECISION  */
    BORDER = 323,                  /* BORDER  */
    TD = 324,                      /* TD  */
    TR = 325,                      /* TR  */
    COLSPAN = 326,                 /* COLSPAN  */
    GET = 327,                     /* GET  */
    DIGITALREAD = 328,             /* DIGITALREAD  */
    DIGITALWRITE = 329,            /* DIGITALWRITE  */
    PINMODE = 330,                 /* PINMODE  */
    COLON = 331,                   /* COLON  */
    DEBUGGER = 332,                /* DEBUGGER  */
    TH = 333,                      /* TH  */
    THEAD = 334,                   /* THEAD  */
    CIN = 335,                     /* CIN  */
    INPUT = 336,                   /* INPUT  */
    PRINTLN = 337,                 /* PRINTLN  */
    CHECKED = 338,                 /* CHECKED  */
    LOOP = 339,                    /* LOOP  */
    SETUP = 340,                   /* SETUP  */
    ELIF = 341,                    /* ELIF  */
    ELSE = 342,                    /* ELSE  */
    CATCH = 343,                   /* CATCH  */
    EXCEPT = 344,                  /* EXCEPT  */
    IOTA = 345,                    /* IOTA  */
    ISNAN = 346,                   /* ISNAN  */
    NAN = 347,                     /* NAN  */
    RAISE = 348,                   /* RAISE  */
    VOID = 349,                    /* VOID  */
    CIRCLE = 350,                  /* CIRCLE  */
    RECTANGLE = 351,               /* RECTANGLE  */
    SQUARE = 352,                  /* SQUARE  */
    TRIANGLE = 353,                /* TRIANGLE  */
    FORMAT = 354,                  /* FORMAT  */
    FONT = 355,                    /* FONT  */
    FUN = 356,                     /* FUN  */
    SQLCOMMAND = 357,              /* SQLCOMMAND  */
    SQLCONNECTION = 358,           /* SQLCONNECTION  */
    ABS = 359,                     /* ABS  */
    ATN = 360,                     /* ATN  */
    COS = 361,                     /* COS  */
    DERIVED = 362,                 /* DERIVED  */
    MATHEXP = 363,                 /* MATHEXP  */
    FIX = 364,                     /* FIX  */
    LOG = 365,                     /* LOG  */
    RND = 366,                     /* RND  */
    SGN = 367,                     /* SGN  */
    SIN = 368,                     /* SIN  */
    SQR = 369,                     /* SQR  */
    TAN = 370,                     /* TAN  */
    LAMBDA = 371,                  /* LAMBDA  */
    CREATEDATE = 372,              /* CREATEDATE  */
    DATE = 373,                    /* DATE  */
    DATEVALUEDAY = 374,            /* DATEVALUEDAY  */
    DAYS360 = 375,                 /* DAYS360  */
    EDATE = 376,                   /* EDATE  */
    HOUR = 377,                    /* HOUR  */
    MINUTE = 378,                  /* MINUTE  */
    MODIFYDATE = 379,              /* MODIFYDATE  */
    MONTH = 380,                   /* MONTH  */
    NETWORKDAYS = 381,             /* NETWORKDAYS  */
    NOW = 382,                     /* NOW  */
    SECOND = 383,                  /* SECOND  */
    TIME = 384,                    /* TIME  */
    TIMEVALUE = 385,               /* TIMEVALUE  */
    TODAY = 386,                   /* TODAY  */
    WEEKDAY = 387,                 /* WEEKDAY  */
    WEEKNUMWORKDAY = 388,          /* WEEKNUMWORKDAY  */
    YEAR = 389,                    /* YEAR  */
    CLEARDEVICE = 390,             /* CLEARDEVICE  */
    CLEARVIEWPORT = 391,           /* CLEARVIEWPORT  */
    CLOSEGRAPH = 392,              /* CLOSEGRAPH  */
    DETECTGRAPH = 393,             /* DETECTGRAPH  */
    GETARCCOORDS = 394,            /* GETARCCOORDS  */
    GETASPECTRAT = 395,            /* GETASPECTRAT  */
    INHEREIT = 396,                /* INHEREIT  */
    CREATORTOOL = 397,             /* CREATORTOOL  */
    LENGUAGE = 398,                /* LENGUAGE  */
    IDENT = 399,                   /* IDENT  */
    IMPORT = 400,                  /* IMPORT  */
    INCLUDE_ONCE = 401,            /* INCLUDE_ONCE  */
    STYLE = 402,                   /* STYLE  */
    FLAGS = 403,                   /* FLAGS  */
    SETF = 404,                    /* SETF  */
    DISABLE = 405,                 /* DISABLE  */
    ENABLE = 406,                  /* ENABLE  */
    HEIGHTHIDE = 407,              /* HEIGHTHIDE  */
    LOCATION = 408,                /* LOCATION  */
    POINT = 409,                   /* POINT  */
    SHOW = 410,                    /* SHOW  */
    SIZE = 411,                    /* SIZE  */
    RETURN = 412,                  /* RETURN  */
    WITH = 413,                    /* WITH  */
    INCLUDE = 414,                 /* INCLUDE  */
    LIST = 415,                    /* LIST  */
    R_BRACE = 416,                 /* R_BRACE  */
    L_BRACE = 417,                 /* L_BRACE  */
    IN = 418,                      /* IN  */
    ENDL = 419,                    /* ENDL  */
    FLUSH = 420,                   /* FLUSH  */
    SETFILL = 421,                 /* SETFILL  */
    SETIOSFLAG = 422,              /* SETIOSFLAG  */
    SETPRECISION = 423,            /* SETPRECISION  */
    SETWUNSETIOSFLAG = 424,        /* SETWUNSETIOSFLAG  */
    FRAME = 425,                   /* FRAME  */
    MAXINT = 426,                  /* MAXINT  */
    MESSAGEBOX = 427,              /* MESSAGEBOX  */
    CONSTMUT = 428,                /* CONSTMUT  */
    EXTERN = 429,                  /* EXTERN  */
    INTERN = 430,                  /* INTERN  */
    NATIVE = 431,                  /* NATIVE  */
    OUT = 432,                     /* OUT  */
    SEALED = 433,                  /* SEALED  */
    UNSAFE = 434,                  /* UNSAFE  */
    METADATADATE = 435,            /* METADATADATE  */
    FROM = 436,                    /* FROM  */
    INTO = 437,                    /* INTO  */
    SHOWBASE = 438,                /* SHOWBASE  */
    _NULL = 439,                   /* _NULL  */
    NAME = 440,                    /* NAME  */
    SRC = 441,                     /* SRC  */
    NEW = 442,                     /* NEW  */
    NONE = 443,                    /* NONE  */
    DIALUP = 444,                  /* DIALUP  */
    DIGESTAUTH = 445,              /* DIGESTAUTH  */
    NTAUTHORITY = 446,             /* NTAUTHORITY  */
    NTDOMAIN = 447,                /* NTDOMAIN  */
    NTLMAUTH = 448,                /* NTLMAUTH  */
    TFOOT = 449,                   /* TFOOT  */
    PASS = 450,                    /* PASS  */
    IF = 451,                      /* IF  */
    TRY = 452,                     /* TRY  */
    MAINPR = 453,                  /* MAINPR  */
    RESTRICTED = 454,              /* RESTRICTED  */
    UNARYPLUS = 455,               /* UNARYPLUS  */
    DOT = 456,                     /* DOT  */
    SEMICOLON = 457,               /* SEMICOLON  */
    AWAIT = 458,                   /* AWAIT  */
    PAUSE = 459,                   /* PAUSE  */
    L_PAR = 460,                   /* L_PAR  */
    R_PAR = 461,                   /* R_PAR  */
    PARAMS = 462,                  /* PARAMS  */
    PACKAGE = 463,                 /* PACKAGE  */
    ORDER = 464,                   /* ORDER  */
    SORT = 465,                    /* SORT  */
    ADDITION = 466,                /* ADDITION  */
    ASSIGNMENTOPERATOR = 467,      /* ASSIGNMENTOPERATOR  */
    CAPITALIZE = 468,              /* CAPITALIZE  */
    DOWNCASE = 469,                /* DOWNCASE  */
    EMPTY = 470,                   /* EMPTY  */
    GSUB = 471,                    /* GSUB  */
    UPCASE = 472,                  /* UPCASE  */
    PLUS = 473,                    /* PLUS  */
    MINUS = 474,                   /* MINUS  */
    MULT = 475,                    /* MULT  */
    DIV = 476,                     /* DIV  */
    OBJECT = 477,                  /* OBJECT  */
    RANDOM = 478,                  /* RANDOM  */
    RANDOMSEED = 479,              /* RANDOMSEED  */
    EQ = 480,                      /* EQ  */
    GT = 481,                      /* GT  */
    LT = 482,                      /* LT  */
    NOT = 483,                     /* NOT  */
    COMP = 484,                    /* COMP  */
    QUESTION = 485,                /* QUESTION  */
    EQEQ = 486,                    /* EQEQ  */
    LTEQ = 487,                    /* LTEQ  */
    GTEQ = 488,                    /* GTEQ  */
    NOTEQ = 489,                   /* NOTEQ  */
    ANDAND = 490,                  /* ANDAND  */
    OROR = 491,                    /* OROR  */
    PLUSPLUS = 492,                /* PLUSPLUS  */
    MINUSMINUS = 493,              /* MINUSMINUS  */
    AND = 494,                     /* AND  */
    OR = 495,                      /* OR  */
    XOR = 496,                     /* XOR  */
    MOD = 497,                     /* MOD  */
    LSHIFT = 498,                  /* LSHIFT  */
    RSHIFT = 499,                  /* RSHIFT  */
    URSHIFT = 500,                 /* URSHIFT  */
    PLUSEQ = 501,                  /* PLUSEQ  */
    MINUSEQ = 502,                 /* MINUSEQ  */
    MULTEQ = 503,                  /* MULTEQ  */
    DIVEQ = 504,                   /* DIVEQ  */
    ANDEQ = 505,                   /* ANDEQ  */
    OREQ = 506,                    /* OREQ  */
    XOREQ = 507,                   /* XOREQ  */
    MODEQ = 508,                   /* MODEQ  */
    LSHIFTEQ = 509,                /* LSHIFTEQ  */
    RSHIFTEQ = 510,                /* RSHIFTEQ  */
    URSHIFTEQ = 511,               /* URSHIFTEQ  */
    COMMA = 512,                   /* COMMA  */
    PUBLIC = 513,                  /* PUBLIC  */
    PRIVATE = 514,                 /* PRIVATE  */
    PROTECTED = 515,               /* PROTECTED  */
    STATIC = 516,                  /* STATIC  */
    FOREACH = 517,                 /* FOREACH  */
    SWITCH = 518,                  /* SWITCH  */
    DEFAULT = 519,                 /* DEFAULT  */
    CASE = 520,                    /* CASE  */
    BREAK = 521,                   /* BREAK  */
    VARCHAR = 522,                 /* VARCHAR  */
    BIT = 523,                     /* BIT  */
    DATETIME = 524,                /* DATETIME  */
    DECIMAL = 525,                 /* DECIMAL  */
    MONEY = 526,                   /* MONEY  */
    NUMERIC = 527,                 /* NUMERIC  */
    REAL = 528,                    /* REAL  */
    SMALLINT = 529,                /* SMALLINT  */
    SMALLDATETIME = 530,           /* SMALLDATETIME  */
    TINYINT = 531,                 /* TINYINT  */
    BINARY = 532,                  /* BINARY  */
    VARBINARY = 533,               /* VARBINARY  */
    IMAGE = 534,                   /* IMAGE  */
    TEXT = 535,                    /* TEXT  */
    INTEGER = 536,                 /* INTEGER  */
    WCHART = 537,                  /* WCHART  */
    BOOL = 538,                    /* BOOL  */
    LONGLONG = 539,                /* LONGLONG  */
    LONGDOUBLE = 540,              /* LONGDOUBLE  */
    WIDECHAR = 541,                /* WIDECHAR  */
    UNSIGNEDINT = 542,             /* UNSIGNEDINT  */
    UNSIGNEDLONG = 543,            /* UNSIGNEDLONG  */
    STRING = 544,                  /* STRING  */
    STRINGUPPERCASE = 545,         /* STRINGUPPERCASE  */
    BYTE = 546,                    /* BYTE  */
    CHAR = 547,                    /* CHAR  */
    INT = 548,                     /* INT  */
    LONG = 549,                    /* LONG  */
    SHORT = 550,                   /* SHORT  */
    DOUBLE = 551,                  /* DOUBLE  */
    FLOAT = 552,                   /* FLOAT  */
    IDENTIFIER = 553               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMERO 258
#define OPEN 259
#define UPDATE 260
#define ADD 261
#define INSERT 262
#define WARNING 263
#define ALIGN 264
#define CONTINUE 265
#define ANALOGREAD 266
#define ANALOGREFERENCE 267
#define ANALOGWRITE 268
#define DOCUMENTID 269
#define FILETYPEFILETYPEEXTENSION 270
#define INSTANCEID 271
#define LINEARIZEDMIMETYPE 272
#define PAGECOUNT 273
#define PAGELAYOUTPDFVERSION 274
#define TAGGEDPDF 275
#define XMPTOOLKIT 276
#define ARRAY 277
#define NOTONE 278
#define PULSEIN 279
#define SHIFTIN 280
#define SHIFTOUT 281
#define TONE 282
#define BOOL_LITERAL 283
#define DEL 284
#define CLOSE 285
#define FINALLY 286
#define ASYNC 287
#define DO 288
#define FOR 289
#define WHILE 290
#define CLASS 291
#define SQL 292
#define COLOR 293
#define ADJUSTFIELD 294
#define BASEFIELD 295
#define FLOATFIELD 296
#define AS 297
#define CROSSJOIN 298
#define DISTINCTEXCEPT 299
#define FULLOUTERJOIN 300
#define JOIN 301
#define LIKE 302
#define WHEN 303
#define WHERE 304
#define BOOLEAN 305
#define MATH 306
#define MATH_E 307
#define MATH_LN10 308
#define MATH_LN2 309
#define MATH_LOG10E 310
#define MATH_LOG2E 311
#define MATH_PIMATH_SQRT1 312
#define MATH_SQRT2 313
#define R_BRACKET 314
#define L_BRACKET 315
#define TBODY 316
#define GLOBAL 317
#define VAL 318
#define VAR 319
#define LET 320
#define FILL 321
#define PRECISION 322
#define BORDER 323
#define TD 324
#define TR 325
#define COLSPAN 326
#define GET 327
#define DIGITALREAD 328
#define DIGITALWRITE 329
#define PINMODE 330
#define COLON 331
#define DEBUGGER 332
#define TH 333
#define THEAD 334
#define CIN 335
#define INPUT 336
#define PRINTLN 337
#define CHECKED 338
#define LOOP 339
#define SETUP 340
#define ELIF 341
#define ELSE 342
#define CATCH 343
#define EXCEPT 344
#define IOTA 345
#define ISNAN 346
#define NAN 347
#define RAISE 348
#define VOID 349
#define CIRCLE 350
#define RECTANGLE 351
#define SQUARE 352
#define TRIANGLE 353
#define FORMAT 354
#define FONT 355
#define FUN 356
#define SQLCOMMAND 357
#define SQLCONNECTION 358
#define ABS 359
#define ATN 360
#define COS 361
#define DERIVED 362
#define MATHEXP 363
#define FIX 364
#define LOG 365
#define RND 366
#define SGN 367
#define SIN 368
#define SQR 369
#define TAN 370
#define LAMBDA 371
#define CREATEDATE 372
#define DATE 373
#define DATEVALUEDAY 374
#define DAYS360 375
#define EDATE 376
#define HOUR 377
#define MINUTE 378
#define MODIFYDATE 379
#define MONTH 380
#define NETWORKDAYS 381
#define NOW 382
#define SECOND 383
#define TIME 384
#define TIMEVALUE 385
#define TODAY 386
#define WEEKDAY 387
#define WEEKNUMWORKDAY 388
#define YEAR 389
#define CLEARDEVICE 390
#define CLEARVIEWPORT 391
#define CLOSEGRAPH 392
#define DETECTGRAPH 393
#define GETARCCOORDS 394
#define GETASPECTRAT 395
#define INHEREIT 396
#define CREATORTOOL 397
#define LENGUAGE 398
#define IDENT 399
#define IMPORT 400
#define INCLUDE_ONCE 401
#define STYLE 402
#define FLAGS 403
#define SETF 404
#define DISABLE 405
#define ENABLE 406
#define HEIGHTHIDE 407
#define LOCATION 408
#define POINT 409
#define SHOW 410
#define SIZE 411
#define RETURN 412
#define WITH 413
#define INCLUDE 414
#define LIST 415
#define R_BRACE 416
#define L_BRACE 417
#define IN 418
#define ENDL 419
#define FLUSH 420
#define SETFILL 421
#define SETIOSFLAG 422
#define SETPRECISION 423
#define SETWUNSETIOSFLAG 424
#define FRAME 425
#define MAXINT 426
#define MESSAGEBOX 427
#define CONSTMUT 428
#define EXTERN 429
#define INTERN 430
#define NATIVE 431
#define OUT 432
#define SEALED 433
#define UNSAFE 434
#define METADATADATE 435
#define FROM 436
#define INTO 437
#define SHOWBASE 438
#define _NULL 439
#define NAME 440
#define SRC 441
#define NEW 442
#define NONE 443
#define DIALUP 444
#define DIGESTAUTH 445
#define NTAUTHORITY 446
#define NTDOMAIN 447
#define NTLMAUTH 448
#define TFOOT 449
#define PASS 450
#define IF 451
#define TRY 452
#define MAINPR 453
#define RESTRICTED 454
#define UNARYPLUS 455
#define DOT 456
#define SEMICOLON 457
#define AWAIT 458
#define PAUSE 459
#define L_PAR 460
#define R_PAR 461
#define PARAMS 462
#define PACKAGE 463
#define ORDER 464
#define SORT 465
#define ADDITION 466
#define ASSIGNMENTOPERATOR 467
#define CAPITALIZE 468
#define DOWNCASE 469
#define EMPTY 470
#define GSUB 471
#define UPCASE 472
#define PLUS 473
#define MINUS 474
#define MULT 475
#define DIV 476
#define OBJECT 477
#define RANDOM 478
#define RANDOMSEED 479
#define EQ 480
#define GT 481
#define LT 482
#define NOT 483
#define COMP 484
#define QUESTION 485
#define EQEQ 486
#define LTEQ 487
#define GTEQ 488
#define NOTEQ 489
#define ANDAND 490
#define OROR 491
#define PLUSPLUS 492
#define MINUSMINUS 493
#define AND 494
#define OR 495
#define XOR 496
#define MOD 497
#define LSHIFT 498
#define RSHIFT 499
#define URSHIFT 500
#define PLUSEQ 501
#define MINUSEQ 502
#define MULTEQ 503
#define DIVEQ 504
#define ANDEQ 505
#define OREQ 506
#define XOREQ 507
#define MODEQ 508
#define LSHIFTEQ 509
#define RSHIFTEQ 510
#define URSHIFTEQ 511
#define COMMA 512
#define PUBLIC 513
#define PRIVATE 514
#define PROTECTED 515
#define STATIC 516
#define FOREACH 517
#define SWITCH 518
#define DEFAULT 519
#define CASE 520
#define BREAK 521
#define VARCHAR 522
#define BIT 523
#define DATETIME 524
#define DECIMAL 525
#define MONEY 526
#define NUMERIC 527
#define REAL 528
#define SMALLINT 529
#define SMALLDATETIME 530
#define TINYINT 531
#define BINARY 532
#define VARBINARY 533
#define IMAGE 534
#define TEXT 535
#define INTEGER 536
#define WCHART 537
#define BOOL 538
#define LONGLONG 539
#define LONGDOUBLE 540
#define WIDECHAR 541
#define UNSIGNEDINT 542
#define UNSIGNEDLONG 543
#define STRING 544
#define STRINGUPPERCASE 545
#define BYTE 546
#define CHAR 547
#define INT 548
#define LONG 549
#define SHORT 550
#define DOUBLE 551
#define FLOAT 552
#define IDENTIFIER 553

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
