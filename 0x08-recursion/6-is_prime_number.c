#include "main.h"

/**
 * is_prime_number - checks if the num is prime
 * @n: integer
 * Return: check_divisibility(n, 2)
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (check_divisibility(n, 2));
}


/**
 *
*/