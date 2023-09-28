#include "main.h"

/**
 * clear_bit - A function tht clear the
 * specific bit to 0 value
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 If the bit is set to 0, and -1
 * if the fuction fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
