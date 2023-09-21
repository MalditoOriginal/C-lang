/* power: raise base to n-th power; n >= 0 */
int power_reverse(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p *= base;
    return p;
}