#include <stdio.h>
#include <stdlib.h>

int values[] = { 30, 10, 43, 23, 23, 1, 3, 8 };
int p = sizeof(values)/sizeof(values[0]);

int myCompar (const void * a, const void * b) 
{
    return ( *(int*)a - *(int*)b );
}
int sizeOfValues (int a) 
{
    return sizeof(a)/sizeof(a[0]);
}

int main ()
{
    int n;
    printf("sizeof(values): %d\n", sizeof(values));
    printf("sizeof(values)/sizeof(values[0]): %d\n", sizeof(values)/sizeof(values[0]));
    printf("sizeOfValues: %d\n", sizeOfValues(values));
    printf("p: %d\n", p);
    qsort (values, 8, sizeof(values[0]), myCompar);
    for (n = 0; n < 8; n++)
        printf ("%d ", values[n]);
    puts("\n");
    return 0;
}

