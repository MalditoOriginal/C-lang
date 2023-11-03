#include <stdio.h>

char func_1() {
    return 'A';
}

char func_2() {
    return 'B';
}

int main() {
    char (*funcs[2])() = {func_1, func_2}; // Declare an array of function pointers

    char result_1 = funcs[0](); // Call the first function
    char result_2 = funcs[1](); // Call the second function

    printf("Result 1: %c\n", result_1);
    printf("Result 2: %c\n", result_2);

    return 0;
}
