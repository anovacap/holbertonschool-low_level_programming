#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char *txt[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1])
	{
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
		if (!fd2)
		{
			printf("Error: Can't write to NAME_OF_THE_FILE");
			exit(99);
		}
		while(fd1 != EOF)
		{
			read(fd1, txt, 1024);
			write(fd2, txt, 1024);
		}
		close(fd1);
		close(fd2);
		if (close(fd1) == -1 || close(fd2) == -1)
		{
			printf("Error: Can't close fd FD_VALUE");
			exit(100);
		}
	}
	printf("Error: Can't read from file NAME_OF_THE_FILE\n");
	exit(98);
}
