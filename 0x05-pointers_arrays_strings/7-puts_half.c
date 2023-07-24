#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, b = (length_of_the_string - 1) / 2
 * @istr: input
 * Return: half of input
 */
void puts_half(char *istr)
{
	int a, b, c;

	c = 0;

	for (a = 0; istr[a] != '\0'; a++)
		c++;

	b = (c / 2);

	if ((c % 2) == 1)
		b = ((c + 1) / 2);

	for (a = b; istr[a] != '\0'; a++)
		_putchar(istr[a]);
	_putchar('\n');
}
