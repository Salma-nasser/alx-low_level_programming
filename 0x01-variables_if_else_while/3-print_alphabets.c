#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 successfully
 */
int main(void)
{
	char x;
	char y;
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
