#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * sum_listint - Entry point
 * @head: pointer to listint_t
 * Return: sum of all nodes
 */


int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *node = head;

	while (node)
	{
		result += node->n;
		node = node->next;
	}

	return (result);
}
