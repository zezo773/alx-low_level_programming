#include "main.h"

/**
 * _strstr - the entry point
 *
 * @haystack: the string that will search in
 * @needle: the string that will seach for it
 *
 * Return: pointer to the beginning of the located of substring
 * Null if not a string found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			i = 0;

			while (needle[i] && haystack[i] == needle[i])
				i++;

			if (needle[i] == '\0')
				return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
