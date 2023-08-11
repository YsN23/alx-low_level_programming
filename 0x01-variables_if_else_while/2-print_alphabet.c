#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercaseAlphabet = 'a';
while (lowercaseAlphabet <= 'z')
{
	putchar(lowercaseAlphabet);
	lowercaseAlphabet++;
}
putchar('\n');
return (0);
}
