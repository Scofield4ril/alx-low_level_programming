#include "main.h"

/**
 * rot13 - converts string to least
 *
 * @c: character string pointer
 * Return: character pointer
 */
char *rot13(char *)
{
	int i, j;
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == c[i])
			{
				c[i] = rot_13[j];
				break;
			}
		}
	}
	return (c);
}
