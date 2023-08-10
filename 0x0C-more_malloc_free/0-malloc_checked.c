#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @i: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int i)
{
	void *ptr;

	ptr = malloc(i);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
