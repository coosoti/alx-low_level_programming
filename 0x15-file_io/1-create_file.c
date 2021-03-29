#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;
	ssize_t write_counter;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	/* finding the length of a text_content string */
	while (text_content[i] != 0)
		i++;
	write_counter = write(fd, text_content, i);
	if (write_counter == -1)
		return (-1);
	close(fd);
	return (1);
}
