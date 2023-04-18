#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: reference to struct dog
 * @name: the dog's name (cstring)
 * @age: the dog's age
 * @owner: the dog's owner name (cstring)
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{

d->name = name;
d->age = age;
d->owner = owner;

}
}
