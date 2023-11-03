#include "/Users/fletamar/Desktop/C_Functions_Library/src/_functions.h"
#include <stdio.h>

char pattern[] = "ould"; /* pattern to search for */

/* find all lines matching pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;

    while (s_getline(line, MAXLINE) > 0)
        if (s_strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    return found;
}
