#include <stdio.h>
/**
 * main - Upper case the lowercase
 * Return: Always 0
 */
int main(void)
{
	char uc;

	for (uc = 'a'; uc <= 'z'; uc++)
		putchar(uc);
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);
	putchar('\n');
	return (0);
}

