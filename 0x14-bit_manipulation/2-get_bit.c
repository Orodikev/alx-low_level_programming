#include "main.h"

/**
 * get_bit - Function to return value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit if sucess or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitnumber;

	if (index > 63)
		return (-1);

	bitnumber = (n >> index) & 1;

	return (bitnumber);
}
