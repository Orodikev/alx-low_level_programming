#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @ptr:Used as a  pointer to the list_t list
 *
 * Return:The  number of elements in pointer ptr
 */
size_t list_len(const list_t *ptr)
{
	size_t t = 0;

	while (ptr)
	{
		ptr++;
		ptr = ptr->next;
	}
	return (t);
}
