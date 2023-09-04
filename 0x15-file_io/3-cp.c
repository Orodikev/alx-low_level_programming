#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Reserves  1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * funclose - A function to  Close the file descriptors.
 * @fil: The file descriptor to be closed.
 */
void funclose(int fil)
{
	int i;

	i = close(fil);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil);
		exit(100);
	}
}

/**
 * cp -A function to Copy the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int cp(int argc, char *argv[])
{
	int start, en, rea, wri;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	rea = read(start, buff, 1024);
	en = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || rea == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wri = write(en, buff, rea);
		if (en == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rea = read(start, buff, 1024);
		en = open(argv[2], O_WRONLY | O_APPEND);

	} while (rea > 0);

	free(buff);
	funclose(start);
	funclose(en);

	return (0);
}
