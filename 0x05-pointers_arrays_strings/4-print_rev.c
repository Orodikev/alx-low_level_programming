#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @rev: string
 * return: 0
 */
void print_rev(char *rev)
{
	int strngr = 0;
	int i;

	while (*rev != '\0')
	{
		strngr++;
		rev++;
	}
	rev--;
	for (i = strngr; i > 0; i--)
	{
		_putchar(*rev);
		rev--;
	}

	_putchar('\n');
}
