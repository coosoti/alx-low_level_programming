#include "holberton.h"

/**
 * flip_bits - returns the number of bits you need to slip to get from one
 * number to another.
 * @n: original number - to slip
 * @m: target number - number to get to
 * Return: the number of bits to slip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int checker, dif, size;
	unsigned int i, count = 0;

	checker = 1;
	dif = n ^ m;
	size = (sizeof(unsigned long int) * 8);

	for (i = 0; i < size; i++)
	{
		if (checker == (dif & checker))
			count++;
		checker <<= 1;
	}

	return (count);

}
