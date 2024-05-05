#include "main.h"

/**
  * str_concat - function that concatenates two strings.
  * @s1: The string to be concatenated.
  * @s2: The string to be concatenated.
  * Return: concatenates two strings.
  */

char *str_concat(char *s1, char *s2)
{
	int count, len = 0, concat = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	count = 0;
	while (s1[count] || s2[count])
	{
		count++;
		len++;
	}
	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (s1[count])
	{
		ptr[concat++] = s1[count];
		count++;
	}
	count = 0;
	while (s2[count])
	{
		ptr[concat++] = s2[count];
		count++;
	}

	return (ptr);
}
