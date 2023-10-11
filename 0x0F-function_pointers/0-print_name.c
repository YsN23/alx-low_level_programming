#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: string
 * @f: function pointer that points to a function with a string parameter
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

	else
		return;
}
