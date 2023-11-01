#include "/Users/fletamar/Desktop/C_Functions_Library/src/custom_functions.h"

/* numcmp: compare s1 and s2 numerically */
int custom_numcmp(char* s1, char* s2)
{
    double v1, v2;

    v1 = atof(s1);
    v2 = atof(s2);
    if (v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else
        return 0;
}