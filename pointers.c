#include <stdio.h>

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

	return 0;
}
