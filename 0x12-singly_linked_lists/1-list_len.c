#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @ptr:Represents a pointer to the list_t list
 *
 * Return: number of elements in ptr
 */
size_t list_len(const list_t *ptr)
{
	size_t t = 0;

	while (ptr)
	{
		t++;
		ptr = ptr->next;
	}
	return (t);
}
