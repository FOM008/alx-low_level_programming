#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: first array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *p, i, tm, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < n / 2; k++)
	{
		tm = a[k];
		ak = *p;
		*p = tm;
		p--;
	}
}

