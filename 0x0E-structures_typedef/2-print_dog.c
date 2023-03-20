#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * struct dog - a struct of dog
 * @d: address of struct
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)\n");
	else if (d->name != NULL)
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("(nil)\n");
	else if (d->age)
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
}
