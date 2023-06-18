#include <stdio.h>
/**
 * main - A program that prints the size of various computertypes
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float g;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(unsigned 1 long)(c));
	printf("Size of a long long int; %lu byte(s)\n", sizeof(unsigned long)(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(unsigned long)(g));
	return (0);
}
