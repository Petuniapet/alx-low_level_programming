#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int n;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[r] = src[n];
		r++;
		n++;
	}

	dest[r] = '\0';
	return (dest);
}
