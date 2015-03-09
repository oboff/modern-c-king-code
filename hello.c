#import <stdio.h>

/*picking up C once again*/

int add(int x, int y) {
	return x + y;
}

int main(void) {
	printf("hello, world.\n");
	printf("%i", add(5, 3));
	return 0;
}