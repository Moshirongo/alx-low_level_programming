#include "main.h"

/**
 * _isdigit - checks if its digit
 * @c: print integer
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
