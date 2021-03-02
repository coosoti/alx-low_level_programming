#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - func that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i, j, m, n, tot_len;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	while (*(s1 + j) != '\0')
	{
		len1++;
		j++;
	}
	m = 0;
	while (*(s2 + m) != '\0')
	{
		len2++;
		m++;
	}
	tot_len = len1 + len2;
	new_str = malloc(sizeof(char) * (tot_len + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		*(new_str + i) = *(s1 + i);
		i++;
	}
	j = len1;
	n = 0;
	while (j < tot_len)
	{
		*(new_str + j) = *(s2 + n);
		j++;
		n++;
	}
	*(new_str + tot_len) = '\0';
	return (new_str);
}
