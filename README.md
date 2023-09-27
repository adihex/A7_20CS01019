# Compiler Design - Assignment 7

`Name: Aditya Balakrishnan`
`Roll no: 20CS01019`

## Lexical analysis and parsing using flex and yacc

- Lex file: parser.l
- YACC file: parser.y

  Main program reads input from file specified by user.

  Run the program by the following commands and then enter the location of the file that you wish to parse:
  Eg: ./input_1.txt

  ```
  yacc parser.y -b  parser -d
  lex parser.l
  gcc parser.tab.c
  ./a.out

  ```
