#include "lists.h"

/**
 * add_nodeint_end -A function to add a node at the end of a linked list
 * @head: pointer to the first node of the linked list
 * @n: data to be put in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *list = *head;

	new = malloc(sizeof(listint_t));
	if (!new)

		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (list->next)
		list = list->next;

	list->next = new;

	return (new);
}

