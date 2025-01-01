#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
    int fd;
    char buf[BUF_SIZE];
    struct stat st;
    int i;
    int count = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "open error: %s\n", strerror(errno));
        exit(1);
    }

    if (fstat(fd, &st) == -1) {
        fprintf(stderr, "fstat error: %s\n", strerror(errno));
        exit(1);
    }

    if (st.st_size == 0) {
        fprintf(stderr, "file is empty\n");
        exit(1);
    }

    if (st.st_size > BUF_SIZE) {
        fprintf(stderr, "file is too big\n");
        exit(1);
    }

    for (i = 0; i < st.st_size; i++) {
        if (read(fd, buf, 1) == -1) {
            fprintf(stderr, "read error: %s\n", strerror(errno));
            exit(1);
        }

        if (buf[0] == '\n') {
            count++;
        }
    }

    printf("%d lines\n", count);

    return 0;
}
