#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file to be opened
 * @letters:  letters is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t x;

	buf = malloc(letters);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	x = write(1, buf, read(fd, buf, letters));
	close(fd);
	return (x);
}
