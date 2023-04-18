#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - dog data structure
 * @owner: the dog's owner name (cstring)
 * @name: the dog's name (cstring)
 * @age: the dog's age
 */
struct dog
{
char *name;
char *owner;
float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
