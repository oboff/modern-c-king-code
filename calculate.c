#include <stdio.h>
#include <math.h>
#include <string.h>

float calc(float a, float b, int operation) {
	switch (operation) {
		case 1	: printf("%f",a+b); break;
		case 2	: printf("%f",a-b); break;
		case 3	: printf("%f",a*b); break;
		case 4	: printf("%f",a/b); break;
	}
}

int main() {
	float a, b;
	int operation;
	printf("Enter a b:\n");
	scanf("%f %f", &a, &b);
	printf("Enter operation:\n");
	scanf("%d", &operation);
	calc(a,b,operation);
}