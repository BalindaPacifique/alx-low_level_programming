#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @k: pointer
 * Return: pointer
 */
char *rot13(char *k)
{
	int i, j;
	char s1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char srot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (k[i] == s1[j])
			{
				k[i] = srot[j];
				break;
			}
		}
	}
	return (k);
}
