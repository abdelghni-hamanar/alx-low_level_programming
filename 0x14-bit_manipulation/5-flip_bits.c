#include "main.h"

/* By Abdelghni Hamanar */
/**
 * flip_bits - Entry point
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int h;
	int c = 0;

	h = n ^ m;

	while (h)
	{
		c++;
		h &= (h - 1);
	}

	return (c);
}
