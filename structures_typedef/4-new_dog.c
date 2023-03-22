#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - crea newdog
 * @name: nombre
 * @age: año
 * @owner: dueño
 *
 * Return: resultado
 */

dog_t *new_dog(char *name, float age, char *owner)
{
char *nname, *nowner;
int a, b;
dog_t *ndog;

ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);
if (name != NULL)
{
for (a = 0; *(name + a) != '\0'; a++)
;
nname = malloc(sizeof(char) * (a + 1));
if (nname == NULL)
{
free(ndog);
return (NULL);
}
for (b = 0; b <= a; b++)
nname[b] = *(name + b);
ndog->name = nname;
}
if (owner != NULL)
{
for (a = 0; *(owner + a) != '\0'; a++)
;
nowner = malloc(sizeof(char) * (a + 1));
if (nowner == NULL)
{
free(nname);
free(ndog);
return (NULL);
}
for (b = 0; b <= a; b++)
nowner[b] = *(owner + b);
ndog->owner = nowner;
}
if (age >= 0)
ndog->age = age;
return (ndog);
}
