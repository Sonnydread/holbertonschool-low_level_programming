#include <stdlib.h>
#include "dog.h"

/**
* free_dog - dog.
* @d: dog name
* Return: Resultado
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
