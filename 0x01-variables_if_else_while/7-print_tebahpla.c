#include <stdio.h>
/**
*main- entry point
*Print numbers of base 10
*Return: 0 (sucess)
*/
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
