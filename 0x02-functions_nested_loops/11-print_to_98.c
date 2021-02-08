#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - func to print natural numbers from n to 98
 *
 * @n: max or min number for which the func starts
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		n--;
	}
	printf("98\n");
}
