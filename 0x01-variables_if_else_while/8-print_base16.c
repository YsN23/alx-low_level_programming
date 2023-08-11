#include <stdio.h>

/**
 * main - print hexadecimal numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hex[] = "0123456789abcdef";
int i = 0;

while (hex[i] != '\0')
{
	putchar(hex[i]);
	i++;
}
putchar('\n');
return (0);
}
