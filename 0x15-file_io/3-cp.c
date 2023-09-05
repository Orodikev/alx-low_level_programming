#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void funclose(int cf);

/**
 * create_buff - A function to reserve 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buff_pointer;

	buff_pointer = malloc(sizeof(char) * 1024);

	if (buff_pointer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff_pointer);
}

/**
 * funclose - A function to  Close file descriptors.
 * @cf: The file descriptor to be closed.
 */
void funclose(int cf)
{
	int c;

	c = close(cf);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cf);
		exit(100);
	}
}

/**
 * main - Function to Copy the contents of a file to another file.
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
int main(int argc, char *argv[])
{
	int start;
	int en;
	int rea;
	int wri;
	char *buff_pointer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff_pointer = create_buff(argv[2]);
	start = open(argv[1], O_RDONLY);
	rea = read(start, buff_pointer, 1024);
	en = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || rea == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff_pointer);
			exit(98);
		}

		wri = write(en, buff_pointer, rea);
		if (en == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff_pointer);
			exit(99);
		}

		rea = read(start, buff_pointer, 1024);
		en = open(argv[2], O_WRONLY | O_APPEND);

	} while (rea > 0);

	free(buff_pointer);
	funclose(start);
	funclose(en);

	return (0);
}
