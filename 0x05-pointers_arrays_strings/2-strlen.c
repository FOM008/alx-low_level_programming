#include "main.h"
#include <string.h>
/**
 * _strlen - unction that returns the length of a string
 *@s:string pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		return (index);

}
