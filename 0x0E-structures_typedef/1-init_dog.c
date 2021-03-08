#include "dog.h"

/**
 *init_dog - intializes variable of type dog
 *@d: pointer to variable
 *@name: pointer to name of the dog
 *@age: pointer to the age of the dog
 *@owner: pointer to owner of dog
 *
 *Return:void
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
