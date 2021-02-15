#include "holberton.h"

/**
 * _strlen - func to return the length of a string
 *
 * @s: str param
 *
 * Return: len of the string
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len = len + 1;
		i++;
	}

	return (len);

}
