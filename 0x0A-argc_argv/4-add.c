#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point - func that adds positive numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{

	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

	}

	for (i = 1; i < argc; i++)
	{

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);

}
