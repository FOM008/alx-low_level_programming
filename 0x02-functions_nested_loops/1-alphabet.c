#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
}
