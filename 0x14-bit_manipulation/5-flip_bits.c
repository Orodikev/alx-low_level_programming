#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int k = 0;
	unsigned long int pr;
	unsigned long int ex = n ^ m;

	while (i >= 0)
	{
		pr = ex >> i;
		if (pr & 1)
			k++;
		i--;
	}

	return (k);
}
