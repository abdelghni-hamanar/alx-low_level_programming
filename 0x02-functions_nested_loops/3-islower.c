#include "main.h"
/**
* _islower- prints the alphabet in lowercase
* @c: the variable
* Return: void
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
