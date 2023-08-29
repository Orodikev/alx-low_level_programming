#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node in a linked list
 * at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 on Success and -1 on Failing
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(list);
		return (1);
	}

	while (i < index - 1)
	{
		if (!list || !(list->next))
			return (-1);
		list = list->next;
		i++;
	}


	current = list->next;
	list->next = current->next;
	free(current);

	return (1);
}
