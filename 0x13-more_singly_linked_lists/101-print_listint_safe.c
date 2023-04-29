#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * print_listint_safe - Entry point
 * @head: pointer to pointer listint_t
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	size_t n;
	const listint_t *tmp = NULL;
	const listint_t *node = NULL;


	tmp = head;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		c++;
		tmp = tmp->next;
		node = head;
		n = 0;

		while (n < c)
		{
			if (tmp == node)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (c);
			}
			node = node->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (c);
}
