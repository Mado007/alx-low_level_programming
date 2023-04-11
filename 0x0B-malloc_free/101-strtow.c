#include "main.h"
#include <stdlib.h>
/**
 * wordCounterRec - count num of words recursively
 * @str: pointer to char
 * @z: current index
 * Return: number of words
 **/
int wordCounterRec(char *str, int z)
{
if (str[z] == '\0')
return (0);
if (str[z] == ' ' && str[z + 1] != ' ' && str[z + 1] != '\0')
return (1 + wordCounterRec(str, z + 1));
return (wordCounterRec(str, z + 1));
}
/**
 * word_counter - counts number of words in 1d array of strings
 * @str: pointer to char
 * Return: number of words
 **/
int word_counter(char *str)
{
if (str[0] != ' ')
return (1 + wordCounterRec(str, 0));
return (wordCounterRec(str, 0));
}
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: pointer to an array of strings (words) or null
 **/
char **strtow(char *str)
{
char **strDup;
int z, n, m, words;

if (str == NULL || str[0] == 0)
return (NULL);
words = word_counter(str);
if (words < 1)
return (NULL);
strDup = malloc(sizeof(char *) * (words + 1));
if (strDup == NULL)
return (NULL);
z = 0;
while (z < words && *str != '\0')
{
if (*str != ' ')
{
n = 0;
while (str[n] != ' ')
n++;
strDup[z] = malloc(sizeof(char) * (n + 1));
if (strDup[z] == NULL)
{
while (--z >= 0)
free(strDup[--z]);
free(strDup);
return (NULL);
}
m = 0;
while (m < n)
{
strDup[z][m] = *str;
m++, str++;
}
strDup[z][m] = '\0';
z++;
}
str++;
}
strDup[z] = '\0';
return (strDup);
}
