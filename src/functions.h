#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define MAXVAL 100      /* maximum depth of value stack */
#define MAXOP 100       /* max size of operand or operator */
#define NUMBER '0'      /* signal that a number was found */
#define BUFSIZE 100
#define ALLOCSIZE 10000 /* size of available space */
#define MAXLEN 1000     /* max length of any input line */
#define MAXLINES 5000   /* max #lines to be sorted */

char *alloc(int n);
double atof(char s[]);
int getch(void);
int getint(int *pn);
int getop(char s[]);

#endif