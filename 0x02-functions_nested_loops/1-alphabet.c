#include "main.h"
#include <stdio.h>
/**
* main - function print all lower case alphabet followed by new line
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
	 putchar(a);
	}
	putchar('\n');
}
