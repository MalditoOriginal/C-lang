#include <stdio.h>

int my_Func();

int main() {

my_Func();

int (*pf)() = my_Func;
int result = pf();

printf("Result: %d\n", result);
}

int my_Func() {
    return 43;
}