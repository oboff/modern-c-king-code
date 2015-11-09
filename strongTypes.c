#include <stdlib.h>
#include <stdio.h>

void printMe (double x)
{
    printf("double: %f\n", x);
}

void printMePointer (double* x)
{
    printf("double*: %f\n", *x);
}

void main()
{
    int y = 10;
    double z = 12;
    
    double* z1 = &z;

    printMe(y);
    printMePointer(z1);

    printf("%#x\n", z1);
    printf("%#x\n", &z1);
    printf("%f\n", *z1);
}


