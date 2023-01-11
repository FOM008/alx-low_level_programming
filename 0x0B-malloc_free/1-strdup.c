#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, r;

	if (str == NULL)
		return (NULL);
	for (r = 0; str[r] != '\0'; r++)

	ptr = (char *) malloc((r + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++;)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
