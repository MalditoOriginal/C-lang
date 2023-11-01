void p_swap(void* v[], int *px, int *py)     /* interchange *px and *py */
{
    void* temp;

    temp = *px;
    *px = *py;
    *py = temp;
}