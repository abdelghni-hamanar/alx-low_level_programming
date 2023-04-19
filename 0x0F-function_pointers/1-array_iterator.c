#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* array_iterator - Entry point
* @array: array
* @size: size of array
* @action: pointer to the function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
