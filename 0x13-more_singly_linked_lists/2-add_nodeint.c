#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * *add_nodeint - Entry point
 * @head: pointer to pointer listint_t
 * @n: variable int
 * Return: listint_t node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
