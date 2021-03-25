#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: given number which we need to manipulate
 * @index: index of the bit to set, starts from 0
 * Return: 1 if it worked, ot -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
	return (1);

}
