#include "lists.h"

/**
 * listint_len - A function returning number of elements in a linked lists
 * @L: linked to traversed
 *
 * Return: The number of nodes in the linked list L
 */
size_t listint_len(const listint_t *L)
{
	size_t s = 0;

	do {
		s++;
		L = L->next;
	}
	while (L);

	return (s);
}
