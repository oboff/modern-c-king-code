#include <stdio.h>

int main() {
	int y = 10;
	int *x = &y;
	int *z = y;
	
	printf("int y = 10;\nint *x = &y;\n&x: %p\nx: %p\n", &x, x);
	
	return 0;
}
