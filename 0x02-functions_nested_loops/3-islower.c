#include "main.h"
/**
 * _islower - checks if a character is lowercase if YES it returns 1
 * otherwise returns 0 just like islower() function in ctype.h
 * @c: is the int value to be compared with the ASCII value
 * Return: 0 if succesful. _islower - Entry point
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
