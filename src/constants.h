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

char *alloc(int n);
double atof(char s[]);
int getch(void);
int getint(int *pn);
int getop(char s[]);
void itoa(int n, char *s);
int numcmp(char *s1, char *s2);
void p_swap(void* v[], int *px, int *py);
double pop(void);
void printd(int n);
void push(double f);
int readlines(char* lineptr[], int maxlines);
void reverseStr(char *s);
int strcmp(char* s, char* t);
void strcpy(char *s, char * t);
int strindex(char *s, char *t);
int strlen(char *s);
void swap(int *v, int i, int j);
int trim(char *s);
void ungetch(int c);
void writelines(char *lineptr[], int nlines);

#endif