#include "main.h"

/**
  * _strlen - Returns the lenght of a string
  * @s: pointer of the string
  *
  * Return: the length of the sting
  */
int _strlen(char *s)
{
	int longi = 0;

		while (*s != '\0')
		{
			longi++;
			s++;
		}

		return (longi);
}
