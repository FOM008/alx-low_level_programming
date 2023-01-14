#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 *  @s: memory area to be filled
 *  @b: char to copy
 *  @n: number of times to copy b
 *
 *  Return: pointer to the memory area s
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}
