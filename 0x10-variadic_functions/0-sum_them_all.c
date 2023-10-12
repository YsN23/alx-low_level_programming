#include "variadic_functions.h"

/**
 * sum_them_all - args sum
 * @n: number of args
 * Return: sum
*/


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argS;

	if (n == 0)
	{
		return (0);
	}

	va_start(argS, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argS, int);
	}

	va_end(argS);

	return (sum);

}
