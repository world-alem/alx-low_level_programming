#include<stdio.h>

int main(void)
{
	int i=0;

	for (; i<1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d\n", i);


	return (0);
}