#include<stdio.h>
/**
 * _puts - prints string with new line followed
 * @str: the string
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%s", str[i]);
		i++;
	}

	printf("\n");
}
