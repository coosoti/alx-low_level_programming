#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @s: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
