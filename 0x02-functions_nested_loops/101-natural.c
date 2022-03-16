#include<stdio.h>

void main() {
	int i=0;

	for (; i<1024; i++)
		if (i%3 == 0 || i%5 == 0)
			printf("%d", i);
}