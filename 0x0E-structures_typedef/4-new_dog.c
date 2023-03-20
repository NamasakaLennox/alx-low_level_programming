#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - creates a copy of a string
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the copy
 */
char *_strdup(char *str)
{
	int count = 0, filler = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	/* size of string */
	while (str[count])
		count++;
	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
		return (NULL);
	/* copy the string */
	while (str[filler])
	{
		copy[filler] = str[filler];
		filler++;
	}
	copy[filler] = '\0';
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* allocate memory space of size dog_t */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = owner;
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
