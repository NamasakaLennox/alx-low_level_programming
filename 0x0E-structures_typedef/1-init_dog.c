#include "dog.h"
#include <stdio.h>
#include <stdio.h>
/**
 * init_dog - initializes a variable
 * struct dog - a struct dog
 * @d: address of the struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
