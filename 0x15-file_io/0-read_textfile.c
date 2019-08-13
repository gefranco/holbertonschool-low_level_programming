#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buf;
	int l;

	if (filename == NULL )
		return (0);
/*	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		printf("Failed to create and open the file\n");
		exit(1);
	}


	write(fd, "Hello World!\n",13);

	

	close(fd);
*/

	/*read*/



	buf = malloc(letters * sizeof(char));


	fd = open(filename, O_RDONLY);


	if (fd==-1)
	{

		return(0);

	}
	

	l = read(fd, buf, letters);

	buf[letters]='\0';

		

	write(1, buf, l);

	close(fd);
	return (l);
}


