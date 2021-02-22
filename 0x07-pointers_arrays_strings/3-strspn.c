#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be compared.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i]; i++)
	{

		for (j = 0; accept[j]; j++)
		{

			if (s[i] == accept[j])
				break;

		}
		if (!accept[j])
			break;

	}

	return (i);

}
