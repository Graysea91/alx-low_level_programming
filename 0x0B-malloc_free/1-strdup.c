#include "main.h"
#include <stdlib.h>

/**
* _strdup - Returns a pointer to a new string
* @str: string pointer
* Return: ptr
*/
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
