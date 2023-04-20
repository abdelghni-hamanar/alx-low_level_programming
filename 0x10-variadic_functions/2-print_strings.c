#include "variadic_functions.h"

/* By Abdelghni Hamanar */
/**
* print_strings - Entry point
* @separator: variable separator
* @n: number of params
* @...: inf number
* Return: sum of params
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list(ap);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	va_end(ap);
	printf("\n");
}
