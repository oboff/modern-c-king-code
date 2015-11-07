#import <stdio.h>
#import <math.h>
#import <string.h>

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
<<<<<<< HEAD
		printf("round of %.2f is %.2f\n", a, roundf(a));
	}
	printf("\n");
	
=======
		printf("round of %.1f is %.1f\n", a, roundf(a));
	}
	printf("\n");
	
	char *name;
	name = "Orlando";
	printf("Hi, my name is %s\n.", name);	
	
>>>>>>> 6037ac6f9aeccea15ca94a7279fd526a9ee764e7
	return 0;
}
