#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_all - prints anything as described in @format
 * @format: a string that describes the types of arguments
 */

void print_all(const char * const format, ...)
{
int x = 0;
char *sep = "", *str;
va_list ap;

if (format)
{
va_start(ap, format);
while (format[x])
{
switch (format[x++])
{
case 'c':
printf("%s%c", sep, va_arg(ap, int));
sep = ", ";
break;
case 's':
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
sep = ", ";
break;
case 'i':
printf("%s%i", sep, va_arg(ap, int));
sep = ", ";
break;
case 'f':
printf("%s%f", sep, va_arg(ap, double));
sep = ", ";
break;
default:
break;
}
}
va_end(ap);
}
putchar('\n');
}
