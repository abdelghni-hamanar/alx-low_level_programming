#include "lists.h"


/* By Abdelghni Hamanar */
/**
 * *add_node - Entry point
 * @head: pointer to pointe
 * @str: pointer to string
 * Return: new node
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;


	while (str[len])
		len++;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
