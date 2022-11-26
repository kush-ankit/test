#include <stdio.h>

int main()
{

    int i, z;
    printf("ENTER THE VALUE:\n");
    scanf("%d", &i);
    i = z;

    for (int x = 0; x <= z; x++)
    {
        switch (i)
        {
        case 1:
            printf("1000");
            break;
        case 2:
            printf("2000");
            break;
        default:
            printf("NON");
            break;
        }
        printf("\n");
        i--;
    }
}