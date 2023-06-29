#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "AEOTL";
	char leet_nums[] = "43071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
				str[i] = leet_nums[j];
		}
	}

	return (str);
}
