#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 *
 */

int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);

	}

	putchar('\n');

	return (0);

}
