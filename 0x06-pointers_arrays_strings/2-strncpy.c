#include "holberton.h"

/**
 * _strncpy - writes a function that copies a string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes from src
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
