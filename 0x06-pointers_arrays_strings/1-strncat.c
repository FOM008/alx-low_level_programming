#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings using at most nbytes
 * @dest: input value
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

