#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Descriptions: prints the alphabets in lowercase then uppercase\n
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
