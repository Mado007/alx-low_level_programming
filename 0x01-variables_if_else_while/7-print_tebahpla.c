#include <stdio.h>
/**
 * main - main block
 * while loop - printing alphabets lower in reverse
 * Return: 0
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
