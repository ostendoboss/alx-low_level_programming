#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - initialize a variable of type struct dog.
  *@d: pointer to the structure.
  *@name: member
  *@age: member
  *@owner: member
  *Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}

