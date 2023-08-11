#include <stdio.h>

/**
 * main - print alphapets in lowercase and upper.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lowercaseAlphabet = 'a';
char upercaseAlpha = 'A';

while (lowercaseAlphabet <= 'z')
{
	putchar(lowercaseAlphabet);
	lowercaseAlphabet++;
}
while (upercaseAlpha <= 'Z')
{
	putchar(upercaseAlpha);
	upercaseAlpha++;
}
putchar('\n');
return (0);
}
