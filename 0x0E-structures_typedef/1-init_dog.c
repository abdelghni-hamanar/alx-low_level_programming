#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* init_dog - Entry point
* @d: variable pointer to struct dog
* @name: variable
* @age: variable
* @owner: variable
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
