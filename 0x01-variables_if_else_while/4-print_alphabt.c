#include <stdio.h>
/**
 * main -entry point
 *
 * print the alphabet except e and q
 *
 * Return: 0 sucessfully
 */
int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
		if (x != 'e' || x != 'q')
			putchar(x);
	putchar('\n');
	return (0);
}
