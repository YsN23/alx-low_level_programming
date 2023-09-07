#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of each element
* Return: Void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	int total_size;

	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	p = malloc(total_size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size / sizeof(int); i++)
	{
		p[i] = 0;
	}

	return (p);
}
