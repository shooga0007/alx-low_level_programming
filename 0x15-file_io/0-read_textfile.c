#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - it reads a text file and it prints it to the POSIX stdout
  * @filename: file to read
  * @letters: the number of letters it will read and print
  * return: the number of letters it will read and read or 0 if it fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int of;
	size_t lRead, check;

	if (!filename || !letters)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);
	/* open file */
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		free(buff);
		return (0);
	}
	/* read file up to "letters" amount of charachters */
	lRead = read(of, buff, letters);
	if (lRead < 1)
	{
		free(buff);
		close(of);
		return (0);
	}
	/* write content read */
	check = write(STDOUT_FILENO, buff, lRead);

	free(buff);
	close(of);

	if (!check || check != lRead)
		return (0);

	return (lRead);
}
