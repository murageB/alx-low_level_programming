#ifndef DOG_H
#define DOG_H
/**
 *struct dog- stored information about the dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: ownwer of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 *dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
