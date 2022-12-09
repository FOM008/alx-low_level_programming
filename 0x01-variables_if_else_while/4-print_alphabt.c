#include <stdio.h>
/**
*main - prints alphabet except pq
*Return: Always 0
*/

int main(void)
{
	char qc;

	for (qc = 'a'; qc <= 'z'; qc++)
	{
		if (qc != 'e' && qc != 'q')
			putchar(qc);
	}
	putchar('\n');
	return (0);
}
