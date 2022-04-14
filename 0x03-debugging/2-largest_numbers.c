#include "main.h"

/**
 * largest_number -checks for the largest number
 * @a: first integer
 * @b: second integer
 * @c: Third integer
 * Return: largest integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
