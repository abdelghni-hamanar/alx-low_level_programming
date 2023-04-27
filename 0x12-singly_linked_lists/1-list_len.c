#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * list_len - Entry point
 * @h: pointer to list_t
 * Return: index size_t
 */


size_t list_len(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}

	return (index);

}
