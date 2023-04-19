#include "3-calc.h"

/* By Abdelghni Hamanar */
/**
* main - Entry point
* @argc: variable
* @argv: pointer
* Return: Always 0 (Success)
*/


int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') &&  b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(a, b);
	printf("%d\n", result);

	return (0);
}
