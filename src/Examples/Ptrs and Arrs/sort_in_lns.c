#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXLEN 1000

char *lineptr[MAXLINES];

int getline(char *, int);
char *alloc(int);

int cust_readlines(char *lineptr[], int nlines);
void cust_writelines(char *lineptr[], int nlines);

void custom_qsort(char *lineptr[], int left, int right); // Renamed the function

int main() {
    int nlines;

    if ((nlines = s_readlines(lineptr, MAXLINES)) >= 0) {
        custom_qsort(lineptr, 0, nlines-1); // Call the custom quicksort function
        s_writelines(lineptr, nlines);
        return 0;
    } else {
        printf("Error: input too big to sort\n");
        return 1;
    }
}

void custom_qsort(char *v[], int left, int right) {
    int i, last;
    void custom_swap(char *v[], int i, int j);

    if (left >= right)
        return;
    custom_swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++)
        if (strcmp(v[i], v[left]) < 0) // Compare strings using strcmp
            custom_swap(v, ++last, i);
    custom_swap(v, left, last);
    custom_qsort(v, left, last - 1);
    custom_qsort(v, last + 1, right);
}

void custom_swap(char *v[], int i, int j) {
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int cust_readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
        if (nlines >= MAXLINES || (p = alloc(len)) == NULL)
            return -1;
        else {
            line[len-1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

void cust_writelines(char *lineptr[], int nlines) {
    int i;
    for (i = 0; i < nlines; i++)
        printf("%d\n", lineptr[i]);
}