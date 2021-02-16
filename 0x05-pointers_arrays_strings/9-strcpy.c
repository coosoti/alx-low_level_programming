#include "holberton.h"

/**
 * _strcpy - Copies a str pointed to by @src, plus the terminating null byte,
 * to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */


char *_strcpy(char *dest, char *src)
{

	int i = 0;
	int len = 0;

	while (src[i++])

		len++;

	for (i = 0; i <= len; i++)


		dest[i] = src[i];


	return (dest);
}
