#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *nameptr, *ownerptr;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	nameptr = malloc(len_name + 1);
	if (nameptr == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		nameptr[i] = name[i];
	nameptr[i] = '\0';

	ownerptr = malloc(len_owner + 1);
	if (ownerptr == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		ownerptr[i] = owner[i];
	ownerptr[i] = '\0';

	new_dog->name = nameptr;
	new_dog->age = age;
	new_dog->owner = ownerptr;
	return (new_dog);
}
