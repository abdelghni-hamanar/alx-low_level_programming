#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * listint_len - Entry point
 * @h: pointer to listint_t
 * Return: index size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
