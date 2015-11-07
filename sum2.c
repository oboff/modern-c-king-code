/* Sums a series of numbers. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n, sum = 0;
    char *p;

    printf ("This program sums series of int.\n");
    printf ("Enter ints (0 to term): ");

    do
    {
        fgets (p, 100, stdin);
        for (; *p != '\0'; p++)
        {
            puts(p);
        }
        n = atoi(p);
        sum = sum + n;
    }
    while (n != 0);
    
    printf ("The sum is: %d\n", sum);

    return 0;
}
