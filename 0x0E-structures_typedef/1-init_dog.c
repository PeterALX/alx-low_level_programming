#include "dog.h"

/**
* init_dog - initialises the dog struct
* @d:  a pointer to a dog struct to be initialised
* @name: name of doggo
* @age: age of doggo
* @owner: owner of doggo
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	(*d).owner = owner;

}
