#include <stdio.h>

char (*(*x[2])())[5];

char (*func_1())[5] {
    static char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    return &arr;
}

char (*func_2())[5] {
    static char arr[5] = {'1', '2', '3', '4', '5'};
    return &arr;
}

int main() {
    x[0] = func_1;
    x[1] = func_2;

    char (*result_1)[5] = x[0]();
    char (*result_2)[5] = x[1]();

    char char_1 = (*result_1)[0];
    char char_2 = (*result_2)[4];

    printf("Result 1: %c\n", char_1); // Output: Result 1: C
    printf("Result 2: %c\n", char_2); // Output: Result 2: 5

    return 0;
}
