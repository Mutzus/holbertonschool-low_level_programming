#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to a string representing the dog's name.
 * @age: The age of the dog.
 * @owner: Pointer to a string representing the owner's name.
 *
 * Return: A pointer to the newly created dog (dog_t).
 *         Returns NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog;

    /* Allocate memory for the new dog */
    new_dog = (dog_t *)malloc(sizeof(dog_t));

    /* Check if malloc fails */
    if (new_dog == NULL)
        return NULL;

    /* Allocate memory and copy the name */
    new_dog->name = strdup(name);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }

    /* Copy the age */
    new_dog->age = age;

    /* Allocate memory and copy the owner */
    new_dog->owner = strdup(owner);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    return new_dog;
}
