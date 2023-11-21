#include "lists.h"

/**
 * get_nodeint_at_index -A function that returns the node at a certain
 * index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *list = head;

	while (i < index)
	{
		list = list->next;
		i++;

	}

	return (list ? list : NULL);
}
