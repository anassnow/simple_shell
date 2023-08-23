#include "shell.h"

/**
 * _strlen - returns The length Of a String
 * @s: The String Whose length To Check
 *
 * return: Integer length Of String
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - Performs lexicogarphic Comparison Of Two strangs.
 * @s1: the First Strang
 * @s2: The Second Strang
 *
 * return: Negative If s1 < s2, Positive If s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks If Needle starts With Haystack
 * @haystack: String To Search
 * @needle: The Substring To Find
 *
 * return: Address Of Next CHAR Of Haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Concatenates Two Strings
 * @dest: The Destination Buffer
 * @src: The Source Buffer
 *
 * return: pointer To Destination Buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
