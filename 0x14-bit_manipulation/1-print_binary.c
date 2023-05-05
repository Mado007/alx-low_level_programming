#include "main.h"

/**
 * print_binary - prints a number in binary 2
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
unsigned int new_var;
char fst = 1;

for (new_var = sizeof(n) * 8; new_var > 0; new_var--)
{
char bit = (n >> (new_var - 1)) & 0x01;

if (bit || (!bit && !fst) || !n)
{
fst = 0;
_putchar(bit + '0');
}
if (!n)
break;
    }
}
