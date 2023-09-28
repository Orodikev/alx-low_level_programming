#include "main.h"

/**
 * binary_to_uint - A function to convert a binary number
 * to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		number = 2 * number + (b[i] - '0');
		i++;
	}

	return (number);
}
