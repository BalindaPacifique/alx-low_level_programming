#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @p: pointer
 * Return: pointer
 */
char *leet(char *p)
{
	int n, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (n = 0; p[n] != '\0'; n++)
	{
		for (m = 0; m <= 10; m++)
		{
			if (p[n] == s1[m])
			{
				p[n] = s2[m];
			}
		}
	}
	return (p);
}
