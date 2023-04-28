#include <stdio.h>

/**
 * premain - a function to execute before the main function
 */
void __attribute__((constructor)) premain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
