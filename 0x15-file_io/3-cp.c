#include "main.h"
#include <stdio.h>

/**
 * error_file - Function to check if file can open.
 * @file_from: File source
 * @file_to: File destination
 * @argv:Vector argument
 * Return: NULL
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check for  Holberton School students in the code
 * @argc: The quantity of arguments
 * @argv: Vector arguments
 * Return: NULL
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t n, w;
	char filb[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, filb, 1024);
		if (n == -1)
			error_file(-1, 0, argv);
		w = write(file_to, filb, n);
		if (w == -1)
			error_file(0, -1, argv);
	}

	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
