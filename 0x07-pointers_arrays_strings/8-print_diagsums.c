#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{

	int i;
	int diag_sum1 = 0, diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum1 += a[i];
		a += size;

	}

	a -= size;

	for (i = 0; i < size; i++)
	{

		diag_sum2 += a[i];
		a -= size;

	}

	printf("%d, %d\n", diag_sum1, diag_sum2);

}
