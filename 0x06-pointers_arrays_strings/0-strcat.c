#include "main.h"

/**
 * _strcat - concantenates 2 strings
 * @dest: appends to
 * @src: appends from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{

	int j = 0, i;

	while (dest[j])
	j++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j += 1;
	}
	dest[j] = '\0';
	return (dest);
}
