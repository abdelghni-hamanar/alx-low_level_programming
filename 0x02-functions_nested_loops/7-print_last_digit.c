#include "main.h"
/**
* print_last_digit - a fucntion that print last degit of a number
* @ld: number last degit result
* Return: value of the last degit
*/
int print_last_digit(int ld)
{
	int pld;

	pld = (ld % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
