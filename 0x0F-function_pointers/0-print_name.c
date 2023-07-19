#include <stdio.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
/**
 * print_name - print a name
 * @name: string
 * @f: function pointer passed takes an array
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
