#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * free_listint_safe - Entry point
 * @h: pointer to pointer listint_t
 * Return: size_t
 */


size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t len = 0;
	int d;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
