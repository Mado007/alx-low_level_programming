#include "main.h"

/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
*
* Return: pointer to the beginning of the located substring, or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
char *result = haystack, *fneedle = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (result);
}
needle = fneedle;
result++;
haystack = result;
}
return (0);
}
