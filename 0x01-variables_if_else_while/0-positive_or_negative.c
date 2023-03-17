#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Description: main - prints out a string to stdouEntry point.
* The Program assigns a random number to int n
* Return: 0 if success.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
	 printf("%d is positive\n", n);
	}
	else if(n == 0)
        {
         printf("%d is zero\n", n);
        }else
        {
         printf("%d is negative\n", n);
        }
	return (0);
}
