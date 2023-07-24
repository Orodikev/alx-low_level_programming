#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @istr: input
 * Return: print
 */
void puts2(char *istr)
{
	int q = 0;
	int t = 0;
	char *i = istr;
	int r;

	while (*i != '\0')
	{
		i++;
		q++;
	}
	t = q - 1;
	for (r = 0 ; r <= t ; r++)
	{
		if (r % 2 == 0)
	{
		_putchar(istr[r]);
	}
	}
	_putchar('\n');
}
