/* p_qsort: sort v[left]...v[right] int increaseing order */
void p_qsort(void* v[], int left, int right,
            int (*comp)(void *, void *))
{
    int i, last;
    void swap(void *v[], int, int);

    if (left >= right) /* do nothing if array contains */
        return;        /* fewer than two elements */
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <=right; i++)
        if ((*comp)(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    p_qsort(v, left, last-1, comp);
    p_qsort(v, last+1, right, comp);
}