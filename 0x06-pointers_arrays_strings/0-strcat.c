#include "main.h"

/**
 * _strcat - concantenates 2 strings
 * @dest: appends to
 * @src: appends from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0, j = 0;
	while (dest[i++])
	j++;

	for (i = 0; src[i++]; i++)
		dest[j++] = src[i];
	return (dest);
}
