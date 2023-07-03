#include <stdio.h>
/**
 * _strstr - check for the substring needle in haystack
 * @needle: string to find
 * @haystack: string to search
 * Return: pointer to string if found or zero
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
