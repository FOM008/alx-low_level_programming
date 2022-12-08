#include <stdio.h>
/**
 * main-print out sizes of data
 * Return: 0
 */
int main(void)
{
	Printf("Size of a char: %zu byte(s)\n", sizeof(char));
	Printf("Size of an int: %zu byte(s)\n", sizeof(int));
	Printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
	Printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
	Printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
