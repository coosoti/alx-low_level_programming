#include "holberton.h"
/**
 * reverse_array - reverses the contents of an array of integers
 * @a: pointer to string
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;
	while (i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		i++;
		n--;
	}
}
