#include <stdio.h>

int main()
{
    int a;
    printf("ENTER A LENGTH:\n");
    scanf("%d", &a);

    for (int x = 0; x < a; x++)
    {
        for (int y = a - (x + 1); y >= 0; y--)
        {
            printf(" ");
        }

        for (int z = 0; z <= x; z++)
        {
            printf("*");
        }
        if (x != 0)
        {

            for (int p = 0; p <= x - 1; p++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
