#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143, i, m = 0;

	while (n % 2 == 0)
		n /= 2;

	for (i = 3; i < sqrt(n); i += 2)
		while (n % i == 0)
		{
			if (i > m)
				m = i;
			n /= i;
		}

	if (n > 2 && n > m)
		m = n;

	printf("%lu\n", n);

	return (0);
}
