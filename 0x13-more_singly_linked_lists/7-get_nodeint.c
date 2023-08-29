#include "lists.h"

/**
 * get_nodeint_at_index -A function that returns the node at a certain
 * index in a linked list
 * @head: first node in the linked list
 * @ind: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int ind)
{
	unsigned int i = 0;
	listint_t *list = head;

	for (i = 0; i < ind; i++)
	{
		list = list->next;

	}

	return (list ? list : NULL);
}
