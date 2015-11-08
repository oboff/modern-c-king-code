#include <stdio.h>

struct myArray 
{
    int a[];
    int size:


void printArray (int* a[])
{
    int size = sizeof(a)/sizeof(a[0]);
    
    for (int i = 0; i < size; i++)
        printf("array[%d]: %d\n", i, a[i]);
}

int main() {
	int y = 10;
	int *x = &y;
	int *z = &y;
	
	printf(
		" int y = 10;\n \
int *x = &y;\n \
int *z = &y;\n \
&x: %p\n \
x: %p\n \
&z: %p\n \
z: %p\n", &x, x, &z, z);

    int ray[] = { 1, 6, 3, 4 };
    printArray (ray);

	return 0;
}
