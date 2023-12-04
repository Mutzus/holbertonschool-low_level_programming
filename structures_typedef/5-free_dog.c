#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to free.
 */
void free_dog(dog_t *d) {
    if (d != NULL) {
        free(d->name);   /* Free the memory allocated for the name */
        free(d->owner);  /* Free the memory allocated for the owner */
        free(d);         /* Free the memory allocated for the entire dog structure */
    }
}
