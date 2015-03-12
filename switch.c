/*switch.c*/

#include <stdio.h>

int main(void) {
	int i;
	printf("Enter a number: [0] [1] [2]\n");
	scanf("%d", &i);

	switch (i) {
		case 0: printf("You selected 0."); break;
		case 1: printf("You selected 1."); break;
		case 2: printf("You selected 2."); break;
		default: printf("You made an incorrect selection."); break;
	}
	printf("\n");
	return 0;
}
