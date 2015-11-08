/* Takes a decimal number and converts to binary
 * 2^3 + 2^2 + 2^1 + 2^0
 *   8 +   4 +   2 +   1
 *
 * 10 % 2 = 0;  5 % 2 = 1;  1 % 2 = 1
 * 10 / 2 = 5;  5 / 2 = 2;  2 / 2 = 1
 * binary: 111
 *
 * 11 % 2 = 1;  
 * 11 / 2 = 5;
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myStr[256];

    puts("Enter decimal integer: ");
    fgets(myStr, sizeof(myStr), stdin);

    int myInt = atoi(myStr);
    //puts(myStr);
    printf("stdin: %d\n", myInt);
    printf("stdin + 10: %d\n", myInt+10);

    return 0;
}
