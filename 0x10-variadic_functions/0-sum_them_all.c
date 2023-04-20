#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - add all @n number of arguments
 * @n: number of arguments
 *
 * Return: the sum of @n arguments otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int sum;
va_list ap;

if (n <= 0)
return (0);

va_start(ap, n);
for (x = 0, sum = 0; x < n; x++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
