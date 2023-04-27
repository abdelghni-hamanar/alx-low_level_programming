#include <stdio.h>

void first(void) __attribute__ ((constructor));

/* By Abdelghni Hamanar */
/**
 * first - prints message befor main
 * function executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
