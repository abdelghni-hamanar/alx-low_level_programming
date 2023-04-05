#include "main.h"

/**
* factorial - a fucntion that return factor of a number
* @n: variable input
* Return: Factorial of n
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
