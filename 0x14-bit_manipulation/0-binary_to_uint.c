#include "main.h"

/* By Abdelghni Hamanar */
/**
 * binary_to_uint - Entry point
 * @b: pointer to const char
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui, p;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);


	for (p = 1, ui = 0, len--; len >= 0; len--, p *= 2)
		if (b[len] == '1')
			ui += p;

	return (ui);
}



