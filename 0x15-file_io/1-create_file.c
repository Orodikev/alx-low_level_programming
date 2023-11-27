#include "main.h"

/**
 * create_file - A function to create a file
 * @filename: Name of the file.
 * @text_content: File content.
 *
 * Return: 1 on success.otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int ltr;
	int w;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (ltr = 0; text_content[ltr]; ltr++);

	w = write(i, text_content, ltr);

	if (w == -1)
		return (-1);

	close(i);

	return (1);
}
