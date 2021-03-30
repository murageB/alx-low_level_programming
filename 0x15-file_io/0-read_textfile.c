#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to buffer to be read.
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, wr, rd;
char *buf;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(letters);
if (buf == NULL)
return (0);
rd = read(fd, buf, letters);
if (rd == -1)
return (0);
wr = write(STDOUT_FILENO, buf, rd);
if (wr == -1 || wr != rd)
return (0);
close(fd);
free(buf);
return(wr);
}
