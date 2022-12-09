#include <stdio.h>
/**
 * main - Print alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char al;

	for (al = "a"; al <= "z"; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
