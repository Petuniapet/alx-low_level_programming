#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int q = n;

	for (; m < q; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}

