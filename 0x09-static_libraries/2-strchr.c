#include "main.h"
#include <stddef.h>
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int o = 0;

	for (; s[o] >= '\0'; o++)
	{
		if (s[o] == c)
			return (&s[o]);
	}
	return (0);
}
