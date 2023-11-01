#include "/Users/fletamar/Desktop/C_Functions_Library/src/custom_functions.h"

/* strcat: concatenate 't' to the end of 's'; 's' must be big enough */
void custom_strcat(char *s, char *t)
{
    int i, j;
    i = j = 0;

    while (s[i] != '\0')    /* find end of 's' */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /* copy 't' */
        ;
}