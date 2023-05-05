#include "main.h"
/**
 * _stoin - convts characters to integers
 * @c: char to be converted
 * Return: conrted inte
 */

unsigned int _stoin(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlenh - calculate the lh of the strings
 * @s: input sing
 * Return: length of the string
 */

unsigned int _strlenh(const char *s)
{
unsigned int d;

for (d = 0; s[d]; d++)
;
return (d);
}

/**
 * binary_to_uint - convert a strinof 1s and 0's to decimal numbers
 * @b: string to be convted
 * Return: unsigned demal numbers we want
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int result, temp, exponn;

if (!i)
return (0);
result = temp = 0;
exponn = 1;
for (i = _strlenh(b) - 1; b[i]; i--, exponn *= 2)
{
if (b[i] != '0' && b[d] != '1')
return (0);
temp = _stoin(b[i]);
result += temp * exponn;
}
return (result);
}
