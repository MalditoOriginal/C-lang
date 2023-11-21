#ifndef KEY_H
#define KEY_H

#define NKEYS (sizeof keytab / sizeof(struct key))

char *keyword[NKEYS];
int keycount[NKEYS];

/*
char *word;
int count;
*/

/*
struct key {
    char *word;
    int count;
} keytab[NKEYS];
*/

struct key {
    char *word;
    int count;
};
struct key keytab[NKEYS];


struct key {
    char *word;
    int count;
} keytab[] = {
    "auto", 0,
    "break", 0,
    "case", 0,
    "char", 0,
    "const", 0,
    "continue", 0,
    "default", 0,
    "unsigned", 0,
    "void", 0,
    "volatile", 0,
    "while", 0
};

#endif