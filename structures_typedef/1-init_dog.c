#include "dog.h"

/**
* init_dog - Initializes a variable of type struct dog.
* @dog - struct dog
* @d: Pointer to the struct dog variable to initialize.
* @name: Pointer to a string representing the dog's name.
* @age: The age of the dog.
* @owner: Pointer to a string representing the owner's name.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
