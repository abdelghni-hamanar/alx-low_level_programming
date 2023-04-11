#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* By Abdelghni Hamanar */
/**
* *argstostr - Entry point
* @ac: variable
* @av: variable
* Return: pointer if Success, and NULL if Not
*/

char *argstostr(int ac, char **av)
{
	char *tab;
	int i = 0, j, size = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	tab = (char *) malloc((size + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			tab[k] = av[i][j];
			j++;
			k++;
		}
		tab[k] = '\n';
		i++;
		k++;
	}
	tab[k] = '\0';

	return (tab);
}

