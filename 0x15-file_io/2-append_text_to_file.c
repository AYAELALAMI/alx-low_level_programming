#include "main.h"

/**
 * append_text_to_file - adds text to the file
 * @filename: a pointer
 * @text_content: pointer to the string
 * Return: 1 on success 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, length;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		j = write(i, text_content, length);

		if (j == -1)

			return (-1);
	}
	close(i);

	return (1);
}
