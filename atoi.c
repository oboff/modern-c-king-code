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
