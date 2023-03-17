#include <stdio.h>
/**
 * main - main block
 * while loop - printing alphabets lower and upper case
 * Return: 0
*/
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar (lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar (upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
