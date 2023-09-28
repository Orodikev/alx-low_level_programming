#include "main.h"

/**
 * get_bit -A function to determine the bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitnum;

	if (index > 63)
		return (-1);

	bitnum = (n >> index) & 1;

	return (bitnum);
}

