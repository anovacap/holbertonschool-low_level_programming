#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i + 1);
	close(fd);
	return (1);
}
