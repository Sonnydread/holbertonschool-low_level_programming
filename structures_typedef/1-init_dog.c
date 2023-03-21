#include "dog.h"
#include <stddef.h>

/**
 * init_dog - struct dog initialize
 * @d: características
 * @name: nombre
 * @age: año
 * @owner: dueño
 * Return: nada
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
