
/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The minuend (the number being subtracted from).
 * @b: The subtrahend (the number being subtracted).
 *
 * Return: The difference of a and b (a - b).
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b (a * b).
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The dividend (the number being divided).
 * @b: The divisor (the number dividing a).
 *
 * Return: The quotient of a and b (a / b).
 *
 * Note: This function checks for division by zero and returns 1 if b is zero.
 */

int div(int a, int b)
{
	if (b == 0)
		return (1);

	return (a / b);
}

/**
 * mod - Computes the remainder of dividing two integers.
 * @a: The dividend (the number being divided).
 * @b: The divisor (the number dividing a).
 *
 * Return: The remainder after dividing a by b (a % b).
 *
 * Note: This function checks for division by zero and returns 1 if b is zero.
 */

int mod(int a, int b)
{
	if (b == 0)
		return (1);

	return (a % b);
}
