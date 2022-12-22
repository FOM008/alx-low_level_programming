#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: first array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *p, i, tp, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < n / 2; k++)
		k++;
	{
		tp = a[k];
		ak = *p;
		*p = tp;
		p--;
	}
}


