#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * *get_nodeint_at_index - Entry point
 * @head: pointer to listint_t
 * @index: index of node
 * Return: listint_t node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}

	if (node)
		return (node);
	else
		return (NULL);
}
