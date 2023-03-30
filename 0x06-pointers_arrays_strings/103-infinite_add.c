#include "main.h"
#include <string.h>

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

	while (*(n + i) != '\0')
		i++;

	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + i);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * *infinite_add - a function that add twi arrays of digits
 * @n1: pointer variable 1
 * @n2: pointer variable 2
 * @r : variable buffer one
 * @size_r: variable size
 * Return: Always r when finished
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int counter = 0;
	int i = 0;
	int j = 0;
	int val1 = 0, val2 = 0, overflow = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;

	while (*(n2 + j) != '\0')
		j++;

	i--;
	j--;

	if (i >= size_r || j >= size_r)
		return (0);

	while (i >= 0 || j >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';

		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';

		temp = val1 + val2 + overflow;

		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;


		if (counter >= (size_r - 1))
			return (0);

		*(r + counter) = (temp % 10) + '0';
		counter++;
		i--;
		j--;
	}
	if (counter == size_r)
		return (0);
	*(r + counter) = '\0';
	rev_string(r);
	return (r);
}
