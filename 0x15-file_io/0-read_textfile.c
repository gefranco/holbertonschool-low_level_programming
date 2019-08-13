#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
/**
 * read_textfile - function that reads a text file and prints it.
 * @filename: archive filename
 * @letters: number of letters it should read and print
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buf;
	ssize_t l;
	int lw;

	if (filename == NULL)
		return (0);



	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);


	if (fd < 0)
	{

		return (0);

	}


	l = read(fd, buf, letters);

	buf[letters + 1] = '\0';


	lw = write(1, buf, l);

	close(fd);
	if (lw < 0)
		return (0);

	return (l);
}
