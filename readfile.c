#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char ch[100];

    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        puts("Can't open file\n");
        exit(1);
    }
    int a = 1;
    const unsigned max_length = 100;
    char buffer[max_length];
    while (fgets(buffer, max_length, fp))
    {
        if (*buffer == '\n') ;
        {
            printf("%s", buffer);
            break;
        }
    }
    fclose(fp);
    return 0;
}