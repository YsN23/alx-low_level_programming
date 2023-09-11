#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure to be initialized
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description:
 * This function initializes dog structure with the provided name,age,and owner
 *
 * @d: A pointer to the dog structure that will be initialized.
 * @name: The name of the dog to be assigned.
 * @age: The age of the dog to be assigned.
 * @owner: The owner of the dog to be assigned.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
