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
	char *txt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	txt = malloc(sizeof(text_content));
	if (!txt)
		return (-1);
	write(fd, text_content, sizeof(txt));
	free(txt);
	close(fd);
	return (1);
}
