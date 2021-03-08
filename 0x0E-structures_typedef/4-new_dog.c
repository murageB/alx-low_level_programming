#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates new dog
 *@name: pointer to name string
 *@age: age of the dog
 *@owner: pointer to owner string
 *
 *Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dg;
unsigned int i, j, count;

if (name == NULL || owner == NULL)
return (NULL);
dg = malloc(sizeof(dog_t));
if (dg == NULL)
return (NULL);
for (i = 0; name[i] != '\0'; i++)
{
dg->name = malloc(sizeof(char) * i);
if (dg->name == NULL)
return (NULL);
for (count = 0; count < i; count++)
dg->name[count] = name[count];
}
dg->age = age;
for (j = 0; owner[j] != '\0'; j++)
{
dg->owner = malloc(sizeof(char) * j);
if (dg->owner == NULL)
return (NULL);
for (count = 0; count < j; count++)
dg->owner[count] = owner[count];
}
return (dg);
}

