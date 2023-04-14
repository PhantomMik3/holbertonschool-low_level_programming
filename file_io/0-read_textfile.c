#include "main.h"

/**
 * read_textfile - open read and write in file
 * @filename: pointer to file
 * @letters: amount of letters to pass
 * Return: output of file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptorf = open(filename, O_RDONLY);
	char *buffer = malloc(letters * sizeof(char));
	ssize_t lettersread = read(descriptorf, buffer, letters);
	ssize_t letterswritten = write(STDOUT_FILENO, buffer, lettersread);

	if (filename == NULL)
		return (0);
	if (descriptorf == -1)
		return (0);
	if (buffer == NULL)
	{
		close (descriptorf);
		return (0);
	}
	if (lettersread == -1)
	{
		close(descriptorf);
		free(buffer);
		return (0);
	}

	if (letterswritten == -1 || letterswritten != lettersread)
	{
		close(descriptorf);
		free(buffer);
		return (0);
	}

	close(descriptorf);
	free(buffer);
	return (letterswritten);
}
