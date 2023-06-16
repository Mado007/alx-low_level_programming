#include <stdio.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username.
 * @username: The username.
 * @key: The buffer to store the generated key.
 */
void generate_key(const char *username, char *key)
{
int i, sum = 0;
size_t len = strlen(username);

for (i = 0; i < len; i++)
{
sum += username[i];
}

sprintf(key, "%d", sum ^ 0x1337);
}

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
