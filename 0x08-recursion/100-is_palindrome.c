#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: length of string
 **/
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palind_recursive - checks if two chars of a string are equal
 * @s: string to be checked
 * @i: first index
 * @j: last index
 * Return: 1 if equal, else 0
 **/

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 * Return: 1 if string is palindrome  else 0
 */

int check(char *s, int start, int end, int pair)
{

if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
return (1);
else if (s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, pair));
}
