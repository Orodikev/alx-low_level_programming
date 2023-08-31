#include "main.h"

/**
 * print_binary - A Function to print the binary equivalent of a decimal number
 * @n: The decimal number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int deci;

	for (i = 63; i >= 0; i--)
	{
		deci = n >> i;

		if (deci & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
