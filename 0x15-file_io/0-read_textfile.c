#include "main.h"
/**
 * read_textfile - function to read file
 * @filename: file to read
 * @letters: amount to read
 * Return: printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	int copied;
	int result;
	char *arr;

	arr = malloc(letters);
	if (arr == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fn = open(filename, O_RDWR);

	if (fn == -1)
		return (0);

	if (read(fn, arr, letters) == -1)
		return (0);
	result = write(STDOUT_FILENO, arr, read(fn, arr, letters));
	if (result == -1)
		return (0);
	if (close(fn) == -1)
		return (0);

	free(arr);
	return (read(fn, arr, letters))
}
