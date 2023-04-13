#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* *_realloc - Entry point
* @ptr: variable pointer
* @old_size: variable
* @new_size: variable
* Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *old_ptr;


	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	old_ptr = ptr;

	new_ptr = malloc(new_size);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*(new_ptr + i) = *(old_ptr + i);
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		*(new_ptr + i) = *(old_ptr + i);
	}

	free(ptr);
	return (new_ptr);

}
