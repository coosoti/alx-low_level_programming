#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array
 *
 * @a: array to print
 * @n: no.of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{

		printf("%d", a[i]);

		if (i < (n - 1))

			printf(", ");
		i++;
	}
	printf("\n");
}
