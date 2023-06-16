#include <stdio.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username.
 * @username: The username.
 * @key: The buffer to store the generated key.
 */
void generate_key(const char *username, char *key)
{
unsigned int i, sum = 0;
size_t len = strlen(username);

for (i = 0; i < len; i++)
{
sum += (unsigned int)username[i];
}

sprintf(key, "%u", sum ^ 0x1337);
}

/**
 * main - Entry point of the keygen program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: %s username\n", argv[0]);
return (1);
}

char key[100];
generate_key(argv[1], key);

printf("%s\n", key);

return (0);
}
