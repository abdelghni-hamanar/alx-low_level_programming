#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Descriptions: prints the alphabets in lowercase\n
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
