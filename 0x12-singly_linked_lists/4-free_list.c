#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * free_list - Entry point
 * @head: pointer to list_t
 * Return: void
 */


void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
