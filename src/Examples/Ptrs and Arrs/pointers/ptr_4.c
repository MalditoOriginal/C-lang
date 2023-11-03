#include <stdio.h>

int main() {
    int cust_Arr[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    int (*daytab)[13];
    daytab = &cust_Arr;

    printf("Element at daytab[0][2]: %d\n", (*daytab)[0]);

    return 0;
}