#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{

	int prod;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);

	}
	else
	{
		prod = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", prod);
		return (0);

	}

}
