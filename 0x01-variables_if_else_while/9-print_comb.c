#include <stdio.h>

/**
 * main - Print numbers separetes by ,
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

while (i < 10)
{
	putchar('0' + i);
	i++;
	if (i < 10)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
