#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Calculates the sum of arguments
* @n: number of args
* Return: sum (int)
*/

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;

int i;

if (n == 0)
{
	return (0);
}

va_list args;
va_start(args, n);


for (i = 0; i < n; i++)
{
	sum += va_arg(args, int);
}

return (sum);
}
