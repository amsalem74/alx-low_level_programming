include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for struct dog
 * @d: struct dog to be freed
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
