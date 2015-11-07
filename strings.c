/*strings.c*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int echo(void) {
	char line[50];
	printf("Enter a string:\n");
	gets(line);
	printf("Here's the string:\n");
	puts(line);
	return 0;
}

int upper(void) {
	char line[50];
	printf("Enter a string:\n");
	gets(line);
	for (int i; line[i]!='\0'; i++) {
		printf("%c", line[i]-('a'-'A'));
	}
	return 0;
}

int switch_case(void) {
	char line[50];
	printf("Enter a string:\n");
	gets(line);
	
	for (int i = 0; line[i]!='\0'; i++) {
		if (line[i] < 'a') {
			printf("%c\t", line[i]);
		}	
		else {
			printf("%c\t", line[i]);
		}
	}
	printf("\n");
	for (int i = 0; line[i]!='\0'; i++) {
		if (line[i] < 'a') {
			printf("%d\t", line[i]);
		}	
		else {
			printf("%d\t", line[i]);
		}
	}	
	printf("\n");
	for (int i = 0; line[i]!='\0'; i++) {
		if (line[i] < 'a') {
			printf("%c\t", line[i]+('a'-'A'));
		}	
		else {
			printf("%c\t", line[i]-('a'-'A'));
		}
	}
	printf("\n");
	for (int i = 0; line[i]!='\0'; i++) {
		if (line[i] < 'a') {
			printf("%d\t", line[i]+('a'-'A'));
		}	
		else {
			printf("%d\t", line[i]-('a'-'A'));
		}
	}	
	return 0;
}

int main(void) {
	switch_case();
	return 0;
}