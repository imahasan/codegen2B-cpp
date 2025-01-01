#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFER_SIZE 100

int main(int argc, char *argv[])
{
    int fd;
    char buffer[BUFFER_SIZE];
    struct stat file_stat;
    int i;

    if (argc != 2)
    {
        printf("Usage: %s <file_name>\n", argv[0]);
        exit(1);
    }

    if (fstat(fd, &file_stat) == -1)
    {
        perror("fstat");
        exit(1);
    }

    if (file_stat.st_size > BUFFER_SIZE)
    {
        printf("File is too big to be displayed\n");
        exit(1);
    }

    if (read(fd, buffer, file_stat.st_size) == -1)
    {
        perror("read");
        exit(1);
    }

    close(fd);

    for (i = 0; i < file_stat.st_size; i++)
    {
        if (buffer[i] == '\n')
        {
            buffer[i] = '\0';
        }
    }

    printf("%s", buffer);

    return 0;
}