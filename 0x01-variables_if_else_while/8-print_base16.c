#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Descriptions: prints base 16 numbers from 1 to 16\n
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
char d = '0';

while (d <= '9')
{
putchar(d);
d++;
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
