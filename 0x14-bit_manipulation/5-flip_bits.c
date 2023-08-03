#include "main.h"

/**
 * flip_bits - counts the nu of bits to change
 * to go from one nu to another
 * @n: first nu
 * @m: second nu
 *
 * Return: nu of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
