#include <stdio.h>

int main()
{
    int a = 5;
    int *x;
    x = &a;

    printf("original: %d\n", *x);
    printf("pre-function address: %p\n", &x);

    int addTwo (int* y) 
    {
        printf("infunction address: %p\n", &x);
        printf("pass by value?: %p\n", &y);
        return (*y + 2);
    }

    printf("addTwo: %d\n", addTwo (x));

    printf("original: %d\n", *x);
    printf("post-function address: %p\n", &x);
    
    float fl = 3.1344f;
    printf("Float(%%10.2f):\t|%10.2f|\n", fl);
    printf("Float(%%-10.2f):\t|%-10.2f|\n", fl);
    
    char date3[] = "June 14";
    for (int i = 0; i < (sizeof(date3)/sizeof(date3[0])); i++)
        printf("\"%c\"\n", date3[i]);
    puts(date3);
    printf("%s\n", date3);
    

    puts("What's your name? ");
    char *strName;
    fgets(strName, 20, stdin);
    puts(strName);

    printf("2005: 20%.2d\n", 5);
    printf("2005: 20%.2f\n", 5.f);

    return 0;
}
