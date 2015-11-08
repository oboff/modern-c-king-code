#include <stdio.h>
#include <limits.h>
#define N 100
int main()
{
    int n;

    puts("Enter an int: ");
    scanf("%d", &n);
    
    while (n > 0)
    {
        printf("%d\n", n % 10);
        n = n / 10;
    }
}
