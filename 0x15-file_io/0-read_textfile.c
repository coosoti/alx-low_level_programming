#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: text file to read
 * @letters: number of letters it should read and print
 * Return: actual no of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_counter, write_counter = 0;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_counter = read(fd, buffer, letters);
	if (read_counter == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	write_counter = write(STDOUT_FILENO, buffer, read_counter);
	if (write_counter == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (write_counter);
}
