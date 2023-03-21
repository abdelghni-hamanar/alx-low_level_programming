#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - prints the alphabet in lowercase 10 times
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 1; i <= 10; i++)
	{
		a = 'a';
		while (a <= 'z')
		{
			printf("%c", a);
			a++;
		}
		putchar('\n');
	}
}
