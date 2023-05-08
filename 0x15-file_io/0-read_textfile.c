#include "main.h"
/**
 * read_textfile - reads the contents of a file and prints to std ouput.
 * @filename: pointer to constant character; filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t rd, wr;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(f, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(f);
	free(buffer);

	return (wr);
}

