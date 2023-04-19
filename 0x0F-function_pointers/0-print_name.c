#include "function_pointers.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* print_name - Entry point
* @name: variable
* @f: pointer to print function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{

	if (!name || !f)
		return;

	f(name);
}
