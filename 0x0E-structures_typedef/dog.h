#ifndef _DOGGO_
#define _DOGGO_
/**
* struct dog - describes a cool doggo
* @name: doggo's name
* @age: doggo's age
* @owner: doggo's caretaker
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
