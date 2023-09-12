#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string
 * @f: function pointer that points to a function with a string parameter
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
