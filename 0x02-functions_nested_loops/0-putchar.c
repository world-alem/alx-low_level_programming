#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void main(void)
{
	char h[] = "_putchar";
	int m;

	m = 0;

	while (m <= 8)
	{
		_putchar(h[m]);
		m++;
	}
	_putchar('\n');
}