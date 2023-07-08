#include <stdio.h>
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to char
 * @src: pointer to char
 * @n: unsigned int
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
