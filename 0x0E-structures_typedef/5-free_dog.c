#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - ...
  * @*a: ...
  *
  * Return: ...
  */
void free_dog(dog_t *a)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
