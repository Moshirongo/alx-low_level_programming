#include <stdio.h>

/**
 * main - prints alphabets on lower case
 *
 * returns: 0 (Success)
 */
/* main function*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
