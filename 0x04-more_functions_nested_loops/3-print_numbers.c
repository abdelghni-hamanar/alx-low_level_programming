#include "main.h"

/**
 * print_numbers -  a function the print numbers btwn 0 and 9
 * Return: void return nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
