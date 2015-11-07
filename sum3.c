#include <stdio.h>

int main()
{
    puts("What's your name? ");
    char *strName;
    fgets(strName, 20, stdin);
    puts(strName);
    
    return 0;
}
