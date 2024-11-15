#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Initialize a variable of type struct dog
 * @name: pointer to the dog's name
 * @owner: pointer to the dog's owner
 * @age: age of dog
 * Return: pointer to new_dog or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_length = 0, owner_length = 0;
	char *name_copy;
	char *owner_copy;
	int i;
	int j;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	return (NULL);

	while (name[name_length] != '\0')
	{
		name_length++;
	}

	while (owner[owner_length] != '\0')
	{
		owner_length++;
	}

	name_copy = malloc(name_length + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < name_length; i++)
	{
		name_copy[i] = name[i];
	}

	owner_copy = malloc(owner_length + 1);

    if (owner_copy == NULL)
	{
        free(name_copy);
        free(new_dog);
        return (NULL);
	}
	for (j = 0; j < owner_length; j++)
	{
		owner_copy[j] = owner[j];
	}

    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

	return (new_dog);
}
