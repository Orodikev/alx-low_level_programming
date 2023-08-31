#include "main.h"

/**
 * print_binary - Afunction that prints the binary value of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int j = 0;
	unsigned long int c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			c++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
