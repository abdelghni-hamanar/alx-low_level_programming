#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * delete_nodeint_at_index - Entry point
 * @head: pointer to pointer listint_t
 * @index: index of node deleted
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}

	node = tmp->next;
	tmp->next = node->next;
	free(node);


	return (1);
}
