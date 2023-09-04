#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: int size of chars
 * @c: char to print
 * Return: char
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	int *ptr;
	int i;

	ptr = (int *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size - 1; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
