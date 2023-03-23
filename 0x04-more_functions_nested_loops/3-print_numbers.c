#include "main.h"

/**
 * print_numbers - prints from 0 to 9 characters
 *
 * Return: void
 */
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');
}
