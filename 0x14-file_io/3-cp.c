#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, rd1;
	char *txt[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1])
	{
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
		if (!fd2)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		while (rd1 > 0)
		{
			rd1 = read(fd1, txt, 1024);
			write(fd2, txt, 1024);
			if (rd1 == 0)
				break;
		}
		close(fd1);
		if (close(fd1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd fd1\n");
			exit(100);
		}
		close(fd2);
		if (close(fd2) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd fd2\n");
			exit(100);
		}
	}
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
