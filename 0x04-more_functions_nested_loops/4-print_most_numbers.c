#include "main.h"

/**
 * print_most_numbers - a function that print 1356789
 * Return: void return nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
