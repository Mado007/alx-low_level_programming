#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name's dog
 * @age: age of the dog
 * @owner: owner's dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int name0, owner0;

if (!name || !owner)
return (NULL);

d = malloc(sizeof(dog_t));
if (!d)
return (NULL);

name0 = strlen(name);
owner0 = strlen(owner);

d->name = malloc((name0 + 1) * sizeof(char));
if (!d->name)
goto free_dog;

d->owner = malloc((owner0 + 1) * sizeof(char));
if (!d->owner)
goto free_name;

strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;

return (d);

free_name:
free(d->name);
free_dog:
free(d);
return (NULL);
}
