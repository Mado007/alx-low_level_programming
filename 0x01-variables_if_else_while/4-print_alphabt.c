#include <stdio.h>
/**
 * main - main block
 * while loop - printing alphabets lower
 * Return: 0
*/
int main(void)
{
	char a_z = 'a';

	while (a_z <= 'z')
	{
		if (a_z != 'e' && a_z != 'q')
		{
			putchar(a_z);
		}
		a_z++;
	}

	putchar('\n');
	return (0);
}
