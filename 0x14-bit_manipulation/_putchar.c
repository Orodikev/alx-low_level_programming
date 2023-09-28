#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character to a standard output device
 * @val: the value character to be printed
 *
 * Return: 1 On success, otherwise -1 and appropriate error set.
 */
int _putchar(char val)
{
	return (write(1, &val, 1));
}
