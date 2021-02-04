#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on successful completions
 *
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;

	}
	putchar('\n');

	return (0);
}
