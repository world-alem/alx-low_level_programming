#include "main.h"

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	for (; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;


	_printchar("%d", sum);
	_printchar("\n");
	return (0);
}
