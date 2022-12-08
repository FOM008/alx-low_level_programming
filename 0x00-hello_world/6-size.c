#include <stdio-h>
/**
 *main - print the size of various types on the computer
 * code by FOM008
 * Return : 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d:
	float f;

	printf("Size of a char: %lu (byte)s\n", (unsigned long) sizeof(a));
	printf("Size of an int: %lu (byte)s\n", (unsigned long) sizeof(b));
	Printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	Printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	Printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
