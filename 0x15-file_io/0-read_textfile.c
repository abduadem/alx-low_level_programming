#include "main.h"
/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, chk = 0; /*fd = file discriptor, chk = checks for read and write*/
	char *buffer;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer) /*buffer == NULL*/
		return (0);

	chk = read(fd, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(fd);
	free(buffer);
	return (chk);
}
