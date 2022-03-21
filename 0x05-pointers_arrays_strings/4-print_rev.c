#include<stdio.h>
#include<string.h>
/**
 * print_rev - print reverse of string
 * @s: the string
 */
void print_rev(char *s)
{
	int i = strlen(*s);

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
}
