#include <stdio.h>

int main()
{
    char *filename = "student.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

    // read one character at a time and
    // display it to the output
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        printf("%s",ch);

    // close the file
    fclose(fp);

    return 0;
}