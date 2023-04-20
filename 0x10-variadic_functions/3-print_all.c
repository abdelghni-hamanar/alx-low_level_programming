#include "variadic_functions.h"

/* By Abdelghni Hamanar */
/**
* print_all - Entry point
* @format: list type
* @...: inf number
* Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *sep = "";

	va_list(ap);

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
