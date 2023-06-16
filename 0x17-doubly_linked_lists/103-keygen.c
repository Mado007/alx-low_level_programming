#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned int key;
unsigned int mask = 0x55;

printf("Please enter the password: ");
scanf("%x", &key);

if (((key >> 0) ^ mask) == 0x98 &&
((key >> 8) ^ mask) == 0x3e &&
((key >> 16) ^ mask) == 0xf2 &&
((key >> 24) ^ mask) == 0x8c &&
((key >> 4) ^ mask) == 0x10)
{
printf("OK\n");
return 0;
}

printf("Incorrect password\n");
return (1);
}
