#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @cmp: function used to compare
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int res, i;

	if (array == NULL || cmp == NULL || size < 0)
		return (-1);

	for (i = 0; i < size; i++)
	{

		res = cmp(array[i]);
		if (res != 0)
			return (i);

	}

	return (-1);

}
