#include "main.h"

/**
 * binary_to_uint - A function converting a binary number to unsigned int
 * @b: A string where the binary number is contained
 *
 * Return: The number the binary has been converted to
 */
unsigned int binary_to_uint(const char *b)
{
	int k = 0;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	while (b[k])

	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal = 2 * decimal + (b[k] - '0');
	}

	return (decimal);
}
