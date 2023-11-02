#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *daytab[13];

    daytab[0] = &a;
    daytab[1] = &b;
    daytab[2] = &c;

    printf("Value at daytab[0]: %d\n", *daytab[0]);
    printf("Value at daytab[1]: %d\n", *daytab[1]);
    printf("Value at daytab[2]: %d\n", *daytab[2]);

    return 0;
}