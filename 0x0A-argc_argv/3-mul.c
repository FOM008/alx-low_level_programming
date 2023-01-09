#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}

