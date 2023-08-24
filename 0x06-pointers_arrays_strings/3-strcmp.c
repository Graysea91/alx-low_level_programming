#include "main.h"

/**
* _strcmp - cmpring two strings
* @s1: input value
* @s2: input value
* Return: Always 0
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[1] != '\0' && s2[1] != '\0')
	{
		if (s1[1] != s2[1])
		{
			return (s1[1] - s2[1]);
		}
		i++;
	}
	return (0);
}
