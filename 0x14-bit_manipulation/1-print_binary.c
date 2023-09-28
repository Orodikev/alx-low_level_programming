#include "main.h"

/**
 * print_binary -A function to print
 * the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, k = 0;
	unsigned long int pr;

	for (i = 63; i >= 0; i--)
	{
		pr = n >> i;

		if (pr & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
