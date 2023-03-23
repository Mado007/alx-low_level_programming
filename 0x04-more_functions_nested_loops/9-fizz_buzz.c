#include <stdio.h>

/**
 * main - prints 0 to 100, Prints Fizz if multiples of 3,
 * Buzz if multiples of 5,
 * FizzBuzz if multiples of both 3 & 5
 *
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		if (x % 5 == 0)
			printf("Buzz");
		if (x % 3 != 0 && x % 5 != 0)
			printf("%d", x);

		printf("%c", x < 100 ? ' ' : '\n');
	}

	return (0);
}
