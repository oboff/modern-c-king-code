#include <stdio.h>

int main()
{

    puts("What's your name? ");
    char strName[20];
    fgets(strName, sizeof(strName), stdin);
    printf("%s\n", strName);

    return 0;
}
