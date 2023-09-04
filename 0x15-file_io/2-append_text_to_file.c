#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A points to the name of the file.
 * @text_content: A string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL and.
 *         If the file does not exist the user lacks write permissions.
 *         If success - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k];)
			k++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, k);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
