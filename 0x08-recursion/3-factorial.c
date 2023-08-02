#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @i: number to return the factorial from
 *
 * Return: factorial of a number i
 */
int factorial(int i)
{
	if (i < 0)
		return (-1);
	if (i == 0)
		return (1);
	return (i * factorial(i - 1));
}
