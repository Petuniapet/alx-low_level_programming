#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int q, b, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (b = 0; av[q][b]; b++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
	for (b = 0; av[q][b]; b++)
	{
		str[r] = av[q][b];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
