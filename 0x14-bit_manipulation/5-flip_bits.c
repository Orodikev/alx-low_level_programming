#include "main.h"

/**
 * flip_bits - A function to count the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int t;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		t = exclusive >> i;
		if (t & 1)
			count++;
	}

	return (count);
}
