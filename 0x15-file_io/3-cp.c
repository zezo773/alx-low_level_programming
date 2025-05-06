#include "main.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * err - checks for file opening errors
 * @file_from: file descriptor for the source file
 * @file_to: file descriptor for the destination file
 * @argv: argument vector holding file names
 * 
 * This function checks if there was an error opening the source or 
 * destination file. If there is an error, it prints an error message
 * and exits the program with the appropriate error code.
 */
void err(int file_from, int file_to, char **argv)
{
        if (file_from == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }
        if (file_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
        }
}

/**
 * main - copies the contents of one file to another
 * @argc: argument count
 * @argv: argument vector containing file names
 * 
 * This program opens the source file, reads its content, and writes it
 * to the destination file. It performs error checking for incorrect
 * arguments, file opening, reading, writing, and closing.
 * It exits with the appropriate status codes for each error.
 *
 * Return: 0 on success, exits on error
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t r, w;
	char buf[1024];
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	err(file_from, file_to, argv);

	r = read(file_from, buf, 1024);
	while(r > 0)
	{
		w = write(file_to, buf, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(file_from, buf, 1024);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
                exit(100);
	}

	return 0;
}
