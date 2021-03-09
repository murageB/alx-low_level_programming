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
dog_t *dg = NULL;
unsigned int i, lenA, lenB;

if (name == NULL || owner == NULL)
return (NULL);
lenA = 0;
while (name[lenA] != '\0')
lenA++;
lenB = 0;
while (owner[lenB] !='\0')
lenB++;

dg = malloc(sizeof(dog_t));
if (dg == NULL)
{
free(dg);
return (NULL);
}
dg->name = malloc(lenA + 1);
if (dg->name == NULL)
{
free(dg->name);
free(dg);
return (NULL);
}
dg->owner = malloc(lenB + 1);
if (dg->owner == NULL)
{
free(dg->name);
free(dg->owner);
free(dg);
return (NULL);
}
for (i = 0; i <= lenA; i++)
dg->name[i] = name[i];
for (i = 0; i <= lenB; i++)
dg->owner[i] = owner[i];
dg->age = age;
return (dg);
}

