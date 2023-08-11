#include <stdio.h>

/**
 * main - print numbers base 10 using putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
i = 0;

while (i < 10)
{
	putchar('0' + i);
	i++;
}
putchar('\n');
return (0);
}
