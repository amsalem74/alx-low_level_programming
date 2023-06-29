#include "main.h"
/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (index == 0 || str[index - 1] == ' ' ||
				str[index - 1] == '\t' || str[index - 1] == '\n' ||
				str[index - 1] == ',' || str[index - 1] == ';' ||
				str[index - 1] == '.' || str[index - 1] == '!' ||
				str[index - 1] == '?' || str[index - 1] == '"' ||
				str[index - 1] == '(' || str[index - 1] == ')' ||
				str[index - 1] == '{' || str[index - 1] == '}')
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 'a' + 'A';
		}

		index++;
	}
	return (str);
}
