#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* int_index - Entry point
* @array: array
* @size: size of array
* @cmp: pointer to the function
* Return: index of the 1st element did cmp not return
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
