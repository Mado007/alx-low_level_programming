#include <stdio.h>
/**
 * main - main block
 * while loop - printing alphabets lower and upper case
 * Return: 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
