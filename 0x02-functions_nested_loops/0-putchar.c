#include "main.h"

/**
 * main - Entry point prints a str.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
