#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * *insert_nodeint_at_index - Entry point
 * @head: pointer to pointer listint_t
 * @idx: index of node should be add
 * @n: variable int
 * Return: listint_t node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp = *head;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}


	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		else
		{
			tmp = tmp->next;
		}
	}

	return (NULL);
}
