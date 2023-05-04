#include "main.h"

/* By Abdelghni Hamanar */
/**
 * _putchar - Entry point
 * @c: char
 * Return: on Success 1 and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
