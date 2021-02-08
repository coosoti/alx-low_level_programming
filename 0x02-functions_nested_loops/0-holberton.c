#include "holberton.h"

/**
 *main - Entry point
 *
 *Return: Always 0
 *
 */

int main(void)
{
	char c;

	char s[] = "Holberton\n";

	for (int i = 0; i <= 9; i++)
	{
		c = s[i];
		_putchar(c);
	}
	return (0);
}
