#include "lists.h"

/**
 * print_listint - Function to print all the elements of a linked list
 * @l: linked list to be printed
 *
 * Return: The number of nodes in the linked list l
 */
size_t print_listint(const listint_t *l)
{
	size_t t = 0;

	while (l)
	{
		printf("%d\n", l->n);
		t++;
		l = l->next;
	}

	return (t);
}
