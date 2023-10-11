#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on arr[i]
 * @array: array of integers
 * @size: size of array
 * @action: Function Pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && (size > 0) && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
