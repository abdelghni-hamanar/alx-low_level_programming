#include "main.h"

/**
 * rev_string - a function the reverse string
 * @n: pointer variable
 * Return: void return nothing
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n +) != '\0')
		i++;

	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + i);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
