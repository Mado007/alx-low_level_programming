#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - print strings with @separator followed by newline
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list ap;

va_start(ap, n);
for (x = 1; x <= n; x++)
{
char *s = va_arg(ap, char *);

printf("%s", s ? s : "(nil)");
if (separator && x != n)
printf("%s", separator);
}
putchar('\n');
va_end(ap);
}
