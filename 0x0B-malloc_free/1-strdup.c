#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* *_strdup - Entry point
* @str: variable
* Return: pointer if Success, and NULL if Not
*/

char *_strdup(char *str)
{
	char *strd;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	strd = (char *) malloc((len + 1) * sizeof(char));

	while ((strd[i] = str[i]) != '\0')
		i++;

	return (strd);
}
