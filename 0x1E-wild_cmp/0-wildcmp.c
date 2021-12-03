#include "holberton.h"

/**
 * wildcmp - compares two strings
 * @s1: string compare 1
 * @s2: string compare 2
 * Return: 1 if identical, 0 if no.
 */
int wildcmp(char *s1, char *s2)
{
	int p = 0;

	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);

	else if (s1[0] == s2[0])
		p = wildcmp(&s1[1], &s2[1]);

	else if (s2[0] == '*')
	{
		if (s2[1] == '*')
			p = wildcmp(&s1[0], &s2[1]);
		else if (s1[1] != '\0')
			p = wildcmp(&s1[1], &s2[0]);
		else
			p = wildcmp(&s1[1], &s2[1]);

		if (p != 1 && s2[1] != '*')
			p = wildcmp(&s1[0], &s2[1]);

	}

	return (p);
}
