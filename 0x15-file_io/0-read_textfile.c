#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function to read text file print to STDOUT.
 * @filename: Name of the file being read
 * @letters: number of letters to be read
 * Return: On Success-The actual number of Letters read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	c = read(a, ptr, letters);
	b = write(STDOUT_FILENO, ptr, c);

	free(ptr);
	close(a);
	return (b);
}
