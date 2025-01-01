#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILE_NAME_LEN 100

int main(int argc, char *argv[])
{
    FILE *fp;
    char fileName[MAX_FILE_NAME_LEN];
    char *fileContent;
    int fileSize;

    if (argc != 2)
    {
        printf("Usage: %s <fileName>\n", argv[0]);
        return -1;
    }

    strcpy(fileName, argv[1]);

    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("Cannot open file %s\n", fileName);
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    fileSize = ftell(fp);
    rewind(fp);

    fileContent = (char *)malloc(fileSize + 1);
    if (fileContent == NULL)
    {
        printf("Cannot allocate memory for file content\n");
        return -1;
    }

    fread(fileContent, fileSize, 1, fp);
    fileContent[fileSize] = '\0';

    printf("File content is: %s\n", fileContent);

    free(fileContent);
    fclose(fp);

    return 0;
}