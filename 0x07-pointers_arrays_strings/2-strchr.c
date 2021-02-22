#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to check
 * @c: character to locate
 * Return: the pointer to first occurrence of c or return NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)

			return (s + i);
	}

	return ('\0');
}
