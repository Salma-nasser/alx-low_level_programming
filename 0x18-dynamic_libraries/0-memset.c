#include <stdio.h>
/**
 * _memset -fills the first n bytes of the memory with b
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: poimnter to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
