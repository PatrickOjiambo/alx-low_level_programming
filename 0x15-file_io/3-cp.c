#include "main.h"
#include <stdio.h>

/**
 * check_file - program checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void check_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: number of vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t ncharx, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(file_from, file_to, argv);

	ncharx = 1024;
	while (ncharx == 1024)
	{
		ncharx = read(file_from, buf, 1024);
		if (ncharx == -1)
			check_file(-1, 0, argv);
		wr = write(file_to, buf, ncharx);
		if (wr == -1)
			check_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

