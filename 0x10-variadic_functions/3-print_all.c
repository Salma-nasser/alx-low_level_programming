#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print everything
 * @format: list of different formats for the input
 * @...: variable parameter depending on input
 * Return: always success
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str, *sep = "";

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char*);
					if (!str)
						str = "nil";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
