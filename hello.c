#import <stdio.h>
#import <math.h>

/*picking up C once again*/

int add(int x, int y) {
	return x + y;
}

int main(void) {
	printf("hello, world.\n\n");
	
	printf("%i\n\n", add(5, 3));
	
	float revenue = 10.10f;
	float cost = 8.34f;
	float profit = revenue - cost;
	printf("$%.2f\n\n", profit);
	
	for(float a=12;a<13;a+=0.1) {
		printf("round of %.1f is %.1f\n\n", a, roundf(a));
	}
	return 0;
}