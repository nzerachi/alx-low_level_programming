#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to first string to be compared.
 * @s2: A pointer to second string to be compared.
 *
 * Return: If str1 < str2, the -ve difrc
 * of first unmatched characters.
 * If s1 == s2, 0
 * If s1 > s2, the +ve difrc of
 * first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
