#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* *create_array - Entry point
* @size: variable
* @c: variable
* Return: pointer if Success, and NULL if Not
*/

char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	point = (char *) malloc(size * sizeof(char));

	if (point == 0)
		return (NULL);

	while (i < size)
	{
		*(point + i) = c;
		i++;
	}

	return (point);
}
