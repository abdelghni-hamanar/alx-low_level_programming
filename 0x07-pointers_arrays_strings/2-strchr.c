#include "main.h"

/**
 * _strchr - a function that return a  pointer to the first
 *occurrence of the character
 * @s: pointer variable
 * @c: variable need to look at
 * Return: Always *s (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}

	return (&s[i]);
}
