#include <stdio.h>
#include <stdlib.h>

/* By Abdelghni Hamanar */
/**
* main - Entry point
* @argc: variable
* @argv: variable pointer
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	/* after argv in the params we can use __attribute__((unused)) */
	/* or we can use it outside when we compile with W flags */
	/* we can use -Wno-unused-parameter */
	printf("%d\n", argc - 1);

	return (0);
}
