#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints number in a condition loop that is nested
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	/*loop function*/
	if (n > 0)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (n < 6 && n != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n,
		last_digit);
	}
	return (0);

}
