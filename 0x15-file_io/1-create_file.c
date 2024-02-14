#include "main.h"
/**
 * create_file - creates a file
 * @filename: the pointer to the file
 * @text_content: what is written on the file
 *
 * Return: If the function fails -1. else 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num;
	int i;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content != NULL)
		text_content = "";

	for (num = 0; text_content[num]; num++);

	i = write(fd, text_content, num);

	if (i == -1)
		return (-1);
	close(fd);
	return (1);
}
