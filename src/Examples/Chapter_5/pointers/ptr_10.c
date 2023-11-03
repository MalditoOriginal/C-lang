#include <stdio.h>

int (*pfa[5])();

int func_1() {
    return 32;
}

int func_2() {
    return 32;
}

int main() {
    pfa[0] = func_1;
    pfa[1] = func_2;

    int res_1 = pfa[0]();
    int res_2 = pfa[1]();

    printf("Result 1: %d\n", res_1);
    printf("Result_2: %d\n", res_2);

    return 0;
}