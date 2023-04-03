#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that return a  pointer to the first
 *occurrence of the character
 * @s: pointer variable
 * @c: variable need to look at
 * Return: Always *s (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0, bol = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			bol = 1;
			break;
		}
		i++;
	}

	if (bol != 0)
		return (&s[i]);
	else
		return (NULL);
}
