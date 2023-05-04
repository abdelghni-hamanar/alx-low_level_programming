#include "main.h"

/* By Abdelghni Hamanar */
/**
 * set_bit - Entry point
 * @n:pointer to unsigned long int
 * @index: unsigned int
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	for (h = 1; index > 0; index--, h *= 2)
		;

	*n += h;

	return (1);
}
