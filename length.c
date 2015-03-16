#include <stdio.h>
#include <ctype.h>

int main() {
	char ch;
	int len = 0;

	printf("Enter your message:\n");
	ch = getchar();
	while ((ch = getchar()) == ' ')
		;	
	while (ch != '\n') {
		len++;
		ch = getchar();
	}

	printf("Your message was %d character(s) long.\n", len);

	return 0;
}