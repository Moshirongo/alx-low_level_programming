#include<stdio.h>

/**
 *main - function begins
 *
 * Return: Function ends
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
