#include <stdio.h>

int main() {
	short int si;
	unsigned short int usi;
	int i;
	unsigned int ui;
	long int li;
	unsigned long int uli;
	
	for (int p=0;p<6;p++) {
		printf("%i\t %u\t %i\t %u\t %lu\t %lu\n", si, usi, i, ui,  li, uli);
	}
	return 0;
}

