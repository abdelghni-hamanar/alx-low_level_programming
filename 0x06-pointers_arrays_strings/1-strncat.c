#include "main.h"

/**
 * *_strncat - a function that conctac the 1st string
 * with number of n char of 2nd string
 * @dest: pointer one variable
 * @src: pointer 2nd variable
 * @n: variable n character
 * Return: Always dest when is Success
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	while (dest[dlen])
		dlen++;

	for (i = 0; i < n && src[i] != '0'; i++)
		dest[dlen + i] = src[i];

	dest[dlen + i] = '\0';

	return (dest);
}
