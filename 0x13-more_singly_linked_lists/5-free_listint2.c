#include "lists.h"

/**
 * free_listint2 -A function to free a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	*head = NULL;
}
