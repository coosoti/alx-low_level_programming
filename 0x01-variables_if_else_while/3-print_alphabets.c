#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char letter;

	letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);

	}

	letter = 'A';

	for (letter = 'A'; letter <= 'Z'; letter++)
	{

		putchar(letter);

	}

	putchar('\n');

	return (0);
}
