#ifndef CUSTOM_FUNCTIONS_H
#define CUSTOM_FUNCTIONS_H

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

/* Algorithms */
int binsearch(int x, int *v, int n);
void p_qsort(void* v[], int left, int right, int (*comp)(void *, void *));
void qsort(int v[], int left, int right);
void shellsort(int v[], int n);

/* String Manipulation */
char *alloc(int n);                         /* Allocates memory */
void copy(char *to, const char *from);      /* Copies a string */
void copy_spec(void);                       /* Copies input to output */
int custom_getline(char *s, int lim);              /* Reads a line into a string */
void reverseStr(char *s);                   /* Reverses a string */
void squeeze(char *s, int c);               /* Removes a character from a string */
void custom_strcat(char *s, char *t);              /* Concatenates two strings */
int strcmp(char *s, char *t);               /* Compares two strings */
void custom_strcpy(char *s, char *t);              /* Copies a string */
int strindex(char *s, char *t);             /* Searches for a substring in a string */
int custom_strlen(char *s);                        /* Calculates the length of a string */
int trim(char *s);                          /* Trims leading and trailing whitespace from a string */

/* Character and String Functions */
int atoi(char *s);                          /* Converts a string to an integer */
int lower(int c);                           /* Converts a character to lowercase */
int getop(char s[]);                        /* Gets the next operator or numeric operand */
void itoa(int n, char *s);                  /* Converts an integer to a string */
double atof(char s[]);                      /* Convert a string to float */
void printd(int n);                         /* Prints an integer as a double */
int getbits(unsigned x, int p, int n);      /* Gets `n` bits from an integer `x` */

/* Mathematical and Numerical Functions */
int bitcount(unsigned x);                   /* Counts the number of set bits in an integer */
int power_reverse(int base, int n);         /* Calculates the reverse of `base` raised to `n` */
int custom_numcmp(char* s1, char* s2);             /* numcmp: compare s1 and s2 numerically */

/* Input and Output Functions */
void eof(void);                                 /* Checks for end-of-file */
int getch(void);                                /* Gets a character from input */
int getint(int *pn);                            /* Gets an integer from input */
void p_swap(void *v[], int *px, int *py);       /* Swaps elements in an array */
double pop(void);                               /* Pops a value from the stack */
void push(double f);                            /* Pushes a value onto the stack */
int rand(void);                                 /* Generates a random integer */
int readlines(char* lineptr[], int maxlines);   /* Reads lines of input into an array */
void ungetch(int c);                            /* Pushes a character back onto input */
void writelines(char *lineptr[], int nlines);   /* Writes lines to output */

#endif