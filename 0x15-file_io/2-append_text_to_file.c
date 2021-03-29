#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to be added at end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;
	ssize_t write_counter;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[i] != 0)
		i++;
	write_counter = write(fd, text_content, i);
	if (write_counter == -1)
		return (-1);
	close(fd);
	return (1);
}
