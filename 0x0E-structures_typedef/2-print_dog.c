#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - function prints the elements of a struct
* @d: Pointer Point To Struct Object
*/

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age >= 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
