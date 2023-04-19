#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name using util function
 * @name: name's main
 * @f: void function
 */
void print_name(char *name, void (*f)(char *))
{
if (f)
(*f)(name);
}
