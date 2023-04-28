#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * free_listint - Entry point
 * @head: pointer to listint_t
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
