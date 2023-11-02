#include <stdio.h>
#include <stdlib.h>

void *comp() {
    int *ptr = malloc(sizeof(int));
    *ptr = 32;
    return (void *)ptr;
}

int main() {
    void *result = comp();
    int *intPtr = (int *)result; // Cast the pointer to the appropriate type (int *)

    printf("Result: %d\n", *intPtr);
    free(intPtr);

    return 0;
}