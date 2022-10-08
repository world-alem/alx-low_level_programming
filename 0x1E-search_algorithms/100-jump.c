#include "search_algos.h"

/**
 * jump_search - jump search algorithm
 * @array: the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t l = 0;
	size_t h = jump;

	if (array == NULL)
		return (-1);

	while (h < size && array[l] < value && value < array[h])
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		printf("Value checked array[%ld] = [%d]\n", h, array[h]);
		l += jump;
		h += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", l, h);

	while (array[l] != value)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		l++;
	}

	return (l);
}
