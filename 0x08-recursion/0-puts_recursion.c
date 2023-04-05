#include "main.h"

/**
 * _puts_recursion: a function that print string alphabet by
 *one using recursion
 * @s: pointer variable string
 * Return: void return nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
