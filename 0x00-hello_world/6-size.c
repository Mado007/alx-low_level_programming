#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 is success
 */
int main(void)
{
	char Zcharacter;
	int Zinteger;
	long Zlong;
	long long Zlonglong;
	float Zfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(Zcharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(Zinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(Zlong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(Zlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(Zfloat));

	return (0);
}
