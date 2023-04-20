#include "variadic_functions.h"
/* By Abdelghni Hamanar */
/**
* print_numbers - Entry point
* @separator: variable separator
* @n: number of arguments
* @...: ifn numbers
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");

}
