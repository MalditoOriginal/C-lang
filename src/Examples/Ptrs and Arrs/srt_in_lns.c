#include "/Users/fletamar/Desktop/C_Functions_Library/src/custom_functions.h"
#include <stdio.h>

char *lineptr[MAXLINES]; /* pointers to text lines */

/* sort input lines */
int main(int argc, char* argv[]) {
    int nlines; /* number of input lines read */
    int numeric = 0; /* 1 if numeric sort */

    if (argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        p_qsort((void **) lineptr, 0, nlines-1,
            (int (*)(void *, void *))(numeric ? custom_numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("input too big to sort\n");
        return 1;
    }
}




