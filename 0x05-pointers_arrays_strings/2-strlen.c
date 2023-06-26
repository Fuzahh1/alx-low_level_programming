#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @Str: The string to get length of 
 * Return: The length of @Str
 */
size_t _strlen(const char *str)

{
	size_t length = 0;
	
	while (*str++)
	length++;
	return (length);
}
