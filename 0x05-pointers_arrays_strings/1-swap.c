#include "holberton.h"

/**
 * swap_int - func to swap the values of two ints given address
 *
 * @a: int params a
 * @b: int params b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}
