#include <stdio.h>
/**
 * main - base 16 numbers
 * Return: Always zero
 */
int main(void)
{
	int num;
	char al;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (al = 'a'; al <= 'f'; al++)
		putchar(al);

	putchar('\n');
	return (0);
}
