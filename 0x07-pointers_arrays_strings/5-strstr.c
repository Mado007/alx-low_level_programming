#include "main.h"

/**
 * _strstr - a function that locates a sub-string
 * @haystack: locate a sub-string
 * @needle: sub-string to locate
 *
 * Return: pointer to the beginning of the located sub-string,
 * or NULL, if sub-string is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
