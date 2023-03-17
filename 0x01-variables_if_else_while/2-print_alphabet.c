#include <stdio.h>
/**
 * main - main block
 * putchar - prints the upper case of a char
 * Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
