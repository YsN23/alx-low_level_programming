#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars and initializes with char
* @size: size of the array to create
* @c: character to initialize the array elements
* Return: a pointer to the created array, or NULL on failure
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
