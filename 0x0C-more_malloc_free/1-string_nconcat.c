#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: Pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *concatenated;

    /*Handle NULL strings as empty strings*/
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

    /*Calculate lengths of s1 and s2*/
	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

    /*Adjust n if it's greater than or equal to the length of s2*/
	if (n >= len2)
	n = len2;

    /*Allocate memory for concatenated string*/
	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
	return (NULL);

    /*Copy s1 to concatenated*/
	for (i = 0; i < len1; i++)
	concatenated[i] = s1[i];

    /*Copy first n characters of s2 to concatenated*/
	for (j = 0; j < n; j++)
	concatenated[i + j] = s2[j];

    /*Add null terminator*/
	concatenated[i + j] = '\0';
	return (concatenated);
}
