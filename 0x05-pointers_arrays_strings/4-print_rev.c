#include "main.h"
#include <string.h>
/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed
 * Return Always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}

