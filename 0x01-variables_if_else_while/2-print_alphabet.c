#include <stdio.h>

/**
 * main - prints alphabets on lower case
 *
 * Return: 0 (Success)
 */
/* main function*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
