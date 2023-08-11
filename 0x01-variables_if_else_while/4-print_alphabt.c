#include <stdio.h>

/**
 * main - print alphapets in lowercase and upper.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lowercaseAlphabet = 'a';

while (lowercaseAlphabet <= 'z')
{
	if (lowercaseAlphabet == 'e' || lowercaseAlphabet == 'q')
	{
		lowercaseAlphabet++;
		continue;
	}
	putchar(lowercaseAlphabet);
	lowercaseAlphabet++;
}
putchar('\n');
return (0);
}
