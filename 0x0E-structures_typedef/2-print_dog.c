#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* print_dog - Entry point
* @d: variable
* Return: pointer if Success, and NULL if Not
*/


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nage: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
