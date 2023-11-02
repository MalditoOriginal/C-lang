#include <stdio.h>

void cust_Func() {
    printf("This is the custom function.\n");
}

int main() {
    void (*comp)() = cust_Func; // Assign the pointe 'comp' to he 'cust_Func' function
    comp();     // Call the function through the pointer

    return 0;
}