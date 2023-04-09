#include <stdio.h>
#include <stdlib.h>

/* By Abdelghni Hamanar */
/**
* main - Entry point
* @argc: variable
* @argv: variable pointer
* Return: Always 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	/* we can use near to params argc __attribute__((unused))*/
	/* we can also use printf("%s\n", *argv); */
	printf("%s\n", argv[0]);
	return (0);
}
