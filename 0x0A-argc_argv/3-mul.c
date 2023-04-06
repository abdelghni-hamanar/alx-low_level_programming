#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* By Abdelghni Hamanar */
/**
* main - Entry point
* @argc: vriable
* @argv: variable pointer
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
