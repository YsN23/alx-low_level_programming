#include "main.h"

/**
 * is_prime_number - checks if the integer is prime
 * @n: integer
 * Return: 1 if n is prime
 * 0 otherwise
*/

int is_prime_number(int n)
{
	if (n < -1)
	{
		return (0);
	}

	else if (n % 1 == 0 && n % n == 0)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
