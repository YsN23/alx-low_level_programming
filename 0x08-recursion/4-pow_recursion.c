#include "main.h"

/**
* _pow_recursion - Calculates The Power of x
* @x: integer (base)
* @y: integer (exp)
* Return: x * _pow_recursion(x, y - 1)
*/

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
