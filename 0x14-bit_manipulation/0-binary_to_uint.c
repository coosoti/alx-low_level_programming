#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a str containing a binary number
 * Return: the converted number, or 0 if b containers a char not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);

}
