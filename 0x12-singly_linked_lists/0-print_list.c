#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * print_list - Entry point
 * @h: pointer to list_t
 * Return: index size_t
 */


size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		index++;
	}

	return (index);
}
