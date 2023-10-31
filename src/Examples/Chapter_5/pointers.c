#include <stdio.h>

int main() {
    int x = 1, y = 2, z[10];
    int *ip;            /* ip is a pointer to int */
    
    ip = &x;            /* ip now points to x */
    y = *ip;            /* y is now 1 */
    *ip = 0;            /* x is now 0 */
    ip = &z[0];         /* ip now points to z[0] */

    printf("The value of ip is: %f\n", ip);
    printf("The value of x is: %f\n", x);
    printf("The value of y is: %f", y);
}