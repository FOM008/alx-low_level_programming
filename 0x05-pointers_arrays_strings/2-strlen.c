#include "main.h"
/**
 * _strlen - unction that returns the length of a string
 *@s:string pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
