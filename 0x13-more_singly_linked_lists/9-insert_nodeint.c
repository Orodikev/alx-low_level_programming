#include "lists.h"

/**
 * insert_nodeint_at_index -A function that inserts a new node at a given
 * position
 * @head: pointer to the first node in the list
 * @idx: position where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *list = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (list && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = list->next;
			list->next = new;
			i++;
			return (new);
		}
		else
			list = list->next;
	}

	return (NULL);
}