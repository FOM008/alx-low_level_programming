#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @v: string to be capitalized
 *
 * Return: pointer to the change string
 */
char *cap_string(char *v)
{
	int i = 0;

	while (str[v])
	{
		while (!(v[i] >= 'a' && v[i] <= 'z'))
			i++;
		if (v[i - 1] == ' ' ||
				v[i - 1] == '\t' ||
				 v[i - 1] == '\n' ||
				 v[i - 1] == ',' ||
				 v[i - 1] == ';' ||
				 v[i - 1] == '.' ||
				 v[i - 1] == '!' ||
				 v[i - 1] == '?' ||
				 v[i - 1] == '"' ||
				 v[i - 1] == '(' ||
				 v[i - 1] == ')' ||
				 v[i - 1] == '{' ||
				 v[i - 1] == '}' ||
				 i == 0)
			v[i] -= 32;
		i++;
	}
	return (v);
}




