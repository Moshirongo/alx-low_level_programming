#include <stdio.h>

/**
 * main - prints numbers with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
