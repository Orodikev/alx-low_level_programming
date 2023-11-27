#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: Name of the file to be operated on
 * @letters: The given number of letters to be printed
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t r;
	ssize_t w;
	char *filb;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	filb = malloc(sizeof(char) * (letters));
	if (!filb)
		return (0);

	r = read(i, filb, letters);
	w = write(STDOUT_FILENO, filb, r);

	close(i);

	free(filb);

	return (w);
}
