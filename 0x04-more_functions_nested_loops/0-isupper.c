#include "main.h"

/**
 * _isupper - checks if letter is Uppercase
 * @c: print int
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}