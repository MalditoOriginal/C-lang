#ifndef CONSTANTS_H
#define CONSTANDTS_H

#define MAXVAL 100      /* maximum depth of value stack */
#define MAXOP 100       /* max size of operand or operator */
#define NUMBER '0'      /* signal that a number was found */
#define BUFSIZE 100
#define ALLOCSIZE 10000 /* size of available space */
#define MAXLEN 1000     /* max length of any input line */
#define MAXLINES 5000   /* max #lines to be sorted */
#define MAXLINE 1000    /* maximum input line length */
#define NULL ((void *)0)    /* macro used to represent a null pointer */
enum eof {EOF = -1};        /* macro used to represent an end of file number */

enum escapes {
    BELL = '\a', BACKSPASE = '\b', FFEED = '\f', NEWLINE = '\n', RETURN = '\r', HTAB = '\t',
    VTAB = '\v', BSLASH = '\\', QMARK = '\?', SQUOTE = '\'', DQUOTE = '\"', ONUM = '\007'
};

char *alloc(int n);
double atof(char s[]);
double atoi(char *s);
int bitcount(unsigned x);
void copy_spec(void);
void copy(char *to, const char* from);
void eof();
unsigned getbits(unsigned x, int p, int n);
int getint(int *pn);
int getch(void);
int getline_spec(void);
int _getline(char *s, int lim);
int getop(char s[]);
void itoa(int n, char *s);
int lower(int c);
int numcmp(char *s1, char *s2);
void p_swap(void* v[], int *px, int *py);
double pop(void);
int power_reverse(int base, int n);
void printd(int n);
void push(double f);
int rand(void);
int readlines(char* lineptr[], int maxlines);
void reverseStr(char *s);
void squeeze(char *s, int c);
void _strcat(char* s, char* t);
int strcmp(char* s, char* t);
void _strcpy(char *s, char * t);
int _strindex(char *s, char *t);
int _strlen(char *s);
void swap(int *v, int i, int j);
int trim(char *s);
void ungetch(int c);
void writelines(char *lineptr[], int nlines);

#endif