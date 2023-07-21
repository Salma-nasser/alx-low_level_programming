#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/** 
 * print_strings - print strings
 * @separator: seperator
 * @n: number of strings passed
 * @...: variable number of strings
 * Return: always 0 success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char*);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
