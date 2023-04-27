#include "lists.h"

/* By Abdelghni Hamanar */
/**
 * *add_node_end - Entry point
 * @head: pointer to pointer
 * @str: pointer to string
 * Return: index size_t
 */


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *end_node;
	list_t *tmp = *head;


	while (str[len])
		len++;


	end_node = (list_t *) malloc(sizeof(list_t));

	if (!end_node)
		return (NULL);


	end_node->str = strdup(str);
	end_node->len = len;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = end_node;


	return (end_node);

}
