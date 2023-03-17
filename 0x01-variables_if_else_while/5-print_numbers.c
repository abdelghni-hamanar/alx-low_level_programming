#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Descriptions: prints all single digit numbers of base 10\n
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
