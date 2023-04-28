#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * pop_listint - Entry point
 * @head: pointer to pointer listint_t
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;


	return (i);
}
