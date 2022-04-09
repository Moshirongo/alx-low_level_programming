#include <stdio.h>

/**
 * main - prints alphabets on lower case
 *
 * returns: 0 (Success)
 */
/* main function*/
int main(void)/* betty style doc for function main goes there */
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
