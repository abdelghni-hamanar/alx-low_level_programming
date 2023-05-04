#include "main.h"

/* By Abdelghni Hamanar */
/**
 * print_binary - Entry point
 * @n: unsigned long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int s;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, s = 0; (tmp >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}
}
