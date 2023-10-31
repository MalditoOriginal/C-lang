/* strlen: return length of string s */
int _strlen(char* s)
{
    /* Create a pointer 'p' that points to the start of the input string 's' */
    char* p = s;
    
    /* Loop through the characters in the string 's' until the null-terminated character is encountered */
    while (*p != '/0')
        p++;

    /* Return the differens between the address of the null-terminator and the start of the strign 's'.
    This gives the length of the string excluding the null-terminator. */
    return p - s;
}