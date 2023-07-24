#include "main.h"

/**
 * rev_string - Reverses a string
 * @istr: Input string
 * Return: String in reverse
 */

void rev_string(char *istr)
{
	char rev = istr[0];
	int counter = 0;
	int i;

	while (istr[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = istr[i];
		istr[i] = istr[counter];
		istr[counter] = rev;
	}
}
