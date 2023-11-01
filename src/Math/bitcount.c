/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
    int b;      /* Declare an int var 'b' to keep track of the count of 1 bits */

    for (b = 0; x != 0; x >>= 1)    /* Loop until 'x' become zero (no more 1 bits to count) */
        if (x & 01)     /* Check if rightmost bit of 'x' is 1 (using bitwise AND with 01). */
            b++;        /* Increment the cound 'b' if the rightmost bit is 1. */
    return b;       /* Return the total count of 1 bits in the given 'x'. */
}