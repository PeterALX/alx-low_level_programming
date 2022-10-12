#ifndef _DOGGO_
#define _DOGGO_
/**
* struct dog - describes a cool doggo
* @name: doggo's name
* @age: doggo's age
* @owner: doggo's caretaker
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
