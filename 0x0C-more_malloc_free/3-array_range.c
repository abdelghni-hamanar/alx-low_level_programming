#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* *array_range - Entry point
* @min: variable
* @max: variable
* Return: pointer if Success, and NULL if Not
*/

int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);

	size = (max - min + 1);

	p = (int *) malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		*(p + i) = min++;

	return (p);
}
