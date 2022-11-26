#include <stdio.h>

int main()
{

    int i;

    printf("ENTER THE LENGTH:\n");
    scanf("%d", &i);

    for (int x = 0; x < i + 1; x++)
    {
        for (int y = 1; y <= x + 1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int z = 1; z <= i; z++)
    {
        for (int q = i - (z - 1); q > 0; q--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}