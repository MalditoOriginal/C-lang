# Pointers #

### Complicated Declarations ###

int *f();   f: function returning pointer to int

int (*pf)();    pf: pointer to function returning int

char **argv
    argv: pointer to pointer to char

int (*daytab)[13]
    daytab: pointer to arr[13] of int

int *daytab[13]
    daytab: arr[13] of pointer to int

void *comp()
    comp: function returning pointer to void

void (*comp)()
    comp: pointer to function returning void

char (*(x())[])()
    x: function returning pointer to array[] of pointer to function returning char

char (*(*x[3])())[5]
    x: array[3] of pointer to function returning pointer to array[5] of char

*dcl:           optional *'s direct-dcl*
*direct-dcl:    name*
                *(dcl)*
                *direct-dcl()*
                *direct-dcl[optional size]*
