/* C programming source code to convert either binary to decimal or decimal to binary according to data entered by user. */

#include <stdio.h>
#include <math.h>
int binary_decimal(int n);
int decimal_binary(int n);
int main()
{
    int n;
    char c;
    printf("Instructions:n");
    printf("1. Enter alphabet 'd' to convert binary to decimal\n");
    printf("2. Enter alphabet 'b' to convert decimal to binary\n");
    scanf("%c",&c);
    if (c =='d' || c == 'D')
    {
        printf("Enter a binary number: ");
        scanf("%d", &n);
        printf("%d in binary = %d in decimal", n, binary_decimal(n));
    }
    if (c =='b' || c == 'B')
    {
        printf("Enter a decimal number: ");
        scanf("%d", &n);
        printf("%d in decimal = %d in binary", n, decimal_binary(n));
    }
    return 0;
}

int decimal_binary(int n)  /* Function to convert decimal to binary.*/
{
    int rem, i=1, binary=0;

    while (n!=0)
    {
        puts("");
        printf("rem=n%2: \t%10d\n", rem=n%2);
        printf("n/=2: \t\t%10d\n", n/=2);
        printf("binary: \t%10d\n", binary);
        printf("rem*i: \t\t%10d\n", rem*i); 
        printf("binary+=rem*i: \t%10d\n", binary+=rem*i);
        printf("i*=10: \t\t%10d\n", i*=10);
        puts("");
    }
    return binary;
}

int binary_decimal(int n) /* Function to convert binary to decimal.*/

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}
