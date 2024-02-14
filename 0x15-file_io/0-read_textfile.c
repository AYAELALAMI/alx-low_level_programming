#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of the file to be read
 * @letters: numbers of letters to be read and printed
 *
 * Return: actual number of letters it reads and prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t num;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	num = read(file_des, &buf[0], letters);
	num = write(STDOUT_FILENO, &buf[0], num);
	close(file_des);
	return (num);
}
