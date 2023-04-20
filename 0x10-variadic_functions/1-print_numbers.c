#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - print all arguments with @separator followed by newline
 * @separator: separe numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int x;

va_start(arg, n);

for (x = 0; x < n; x++)
{
printf("%i", va_arg(arg, int));
if (x != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(arg);

putchar('\n');
}
