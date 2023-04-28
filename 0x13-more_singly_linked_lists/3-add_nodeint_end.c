#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * *add_nodeint_end - Entry point
 * @head: pointer to pointer listint_t
 * @n: variable int
 * Return: listint_t node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *tmp = *head;

	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = end;

	return (end);
}
