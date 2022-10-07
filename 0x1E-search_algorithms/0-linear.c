#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: the array
 * @size: array size
 * @value: value for search
 *
 * Return: index of the position of the value
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int index;
	size_t i;

	if (array == NULL)
		return (-1);

	index = -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
	}

	return (index);
}
