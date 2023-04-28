#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * print_listint - Entry point
 * @h: pointer to listint_t
 * Return: index size_t
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;


	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
