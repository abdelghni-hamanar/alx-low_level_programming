#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* *str_concat - Entry point
* @s1: variable
* @s2: variable
* Return: pointer if Success, and NULL if Not
*/

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;


	s3 = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
			j++;
			i++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
