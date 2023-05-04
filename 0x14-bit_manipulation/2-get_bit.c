#include "main.h"

/* By Abdelghni Hamanar */
/**
 * get_bit - Entry point
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
