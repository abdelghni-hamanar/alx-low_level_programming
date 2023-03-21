#include <stdio.h>
/**
* main - computes and printsthe sum of all the multiples of 3 and 5 below 1024
*
* Return: void return nothing
*/
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
