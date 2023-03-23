#include "main.h"

/**
 * _isupper - a function that print is the char upper or not
 * @c: variable input
 * Return: 1 if char upper and 0 if is not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
