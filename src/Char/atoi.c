/* atoi: convert string s to integer using atof */
/* int atoi(char s[])
/* {    return (int) atof(s);}

/* atoi: convert s to integer */
int atoi(char *s)
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}
