#include "search_algos.h"
/**
 *print_array - prints the array to be searched
 *@array: pointer to the array to search
 *@start: the starting point of the array
 *@end: the ending point of the array
 *
 *Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%i", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}

/**
 *binarySearchFunction - searches for a value in sorted array of integers
 *@array: pointer to array to search
 *@start: the starting index of the subarray
 *@end: the ending index of the subarray
 *@value: the value to find
 *
 *Return: the index of the value or -1 if not found
 */

int binarySearchFunction(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	mid = (end + start) / 2;

	if (start > end)
		return (-1);

	print_array(array, start, end);

	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
		return (binarySearchFunction(array, start, mid - 1, value));

	if (array[mid] < value)
		return (binarySearchFunction(array, mid + 1, end, value));

	return (-1);
}

/**
*binary_search - searches for a value in sorted array of integers
*@array: pointer to the array to search
*@size: the size of the array
*@value: the value to find
*
*Return: the index where the value is located
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binarySearchFunction(array, 0, size - 1, value));
}
