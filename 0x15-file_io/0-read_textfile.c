#include "main.h"

/**
 * read_textfile - Read a text file and prints it
 * @filename: filename.
 * @letters: num of letters print
 *
 * Return: returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int lf;
ssize_t nrd, nwr;
char *buf;

if (!filename)
return (0);

lf = open(filename, O_RDONLY);

if (lf == -1)
return (0);

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

nrd = read(lf, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);

close(lf);

free(buf);

return (nwr);
}
