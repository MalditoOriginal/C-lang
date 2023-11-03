#include <stdio.h>
#include <stdlib.h>

int *f();

int main() {
    int *result = f();
    printf("Result: %d\n", *result);
    free(result);
}

int *f() {
    int *ptr = malloc(sizeof(int));
    *ptr = 43;
    return ptr;
}