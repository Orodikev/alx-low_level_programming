#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @pts: string to print
 */
void _puts(char *pts)
{
	while (*pts != '\0')
	{
		_putchar(*pts++);
	}
		_putchar('\n');
}
