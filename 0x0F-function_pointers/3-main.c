#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program that preforms simple operations
 * @argc: number of lines arguments
 * @argv: array of elements
 * Return: 0
 */
int main(int argc, char *argv[])
{
int M;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

M = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", M);

return (0);
}
