#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Descriptions: prints the alphabets in lowercase in reverse mode\n
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
