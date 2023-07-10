#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX stdout
 * @filename: character aray containing filename
 * @letters: number of letters in file
 * Return: number ofletters it could read and print, or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rwords, wwords;
	char *tmp;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	rwords = read(file, tmp, letters);
	if (rwords == -1)
	{
		free(tmp);
		return (0);
	}
	wwords = write(STDOUT_FILENO, tmp, rwords);
	if (wwords == -1 || wwords != rwords)
	{
		free(tmp);
		return (0);
	}
	free(tmp);
	close(file);

	return (wwords);
}
