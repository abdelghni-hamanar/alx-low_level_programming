#include "main.h"

/* By Abdelghni Hamanar */
/**
 * get_endianness - Entry point
 * Return: int
 */

int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
