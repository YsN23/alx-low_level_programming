#include "main.h"
#include <stdlib.h>


/**
* array_range - create an array of integers
* @min: min value
* @max: max value
* Return: int (p)
*/

int *array_range(int min, int max)
{
	int i;

	int *p;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
