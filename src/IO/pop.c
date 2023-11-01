#include "custom_functions.h"

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

/* pop: pop and return top value from stack */
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}