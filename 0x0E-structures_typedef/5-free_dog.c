#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* free_dog - Entry point
* @d: variable
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
