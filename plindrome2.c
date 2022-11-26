#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[30];
    gets(inputString);

    int length = strlen(inputString);
    int index = 0;
    int isPlendrom = 1;
    while (length - index >= 0)
    {
        if (inputString[index] != inputString[(length - 1 - index)])
        {
            isPlendrom = 0;
            break;
        }
        index++;
    }
    if (isPlendrom)
    {
        printf("string '%s' is plindrom", inputString);
    }
    else
    {
        printf("string '%s' is not plindrom", inputString);
    }
    return 0;
}
