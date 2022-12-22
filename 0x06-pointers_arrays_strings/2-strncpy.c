#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: parameter 1
 * @src: paramater 2
 * @n: parmater 3
 * Return: String
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

