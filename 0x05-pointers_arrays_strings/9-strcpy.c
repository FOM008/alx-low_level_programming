#include "main.h"
/**
 * _strcpy - opies the string pointed to by src
 * @dest: destination
 * @src: copia
 * Return: this is the return
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
