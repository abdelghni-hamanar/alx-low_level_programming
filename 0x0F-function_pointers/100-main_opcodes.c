#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/* By Abdelghni Hamanar */
/**
 * main - Entry point
 * @argc: variable
 * @argv: pointer
 * Return: Always 0 (Success);
 */

int main(int argc, char *argv[])
{
	int bytes, i = 0;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *) main;

	while (i < bytes)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", s[i]);
			break;
		}
		printf("%02hhx ", s[i]);
		i++;
	}

	return (0);
}
