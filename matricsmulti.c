#include <stdio.h>
#include <stdlib.h>

char c[] = {'|'};

int main()
{
    int e, f, g, h;
    printf("Enter the size of first matrix:\n");
    scanf("%d %d", &e, &f);
    printf("Enter the size of second matrix:\n");
    scanf("%d %d", &g, &h);
    int a[e][f];
    int b[g][h];

    if (f == g)
    {
        printf("Enter the first numbers:\n");
        for (int y = 0; y < e; y++)
        {
            for (int z = 0; z < f; z++)
            {
                scanf("%d", &(a[y][z]));
            }
        }
        printf("Enter the second numbers:");
        for (int s = 0; s < g; s++)
        {
            for (int t = 0; t < h; t++)
            {
                scanf("%d", &(b[s][t]));
            }
        }

        for (int m = 0; m < e; m++)
        {
            printf("%c ", c[0]);
            for (int n = 0; n < f; n++)
            {
                printf("%2d ", a[m][n]);
            }
            printf("%c\n", c[0]);
        }
        printf("\n");
        for (int o = 0; o < g; o++)
        {
            printf("%c ", c[0]);
            for (int p = 0; p < h; p++)
            {
                printf("%2d ", b[o][p]);
            }
            printf("%c\n", c[0]);
        }
        printf("\nMultiplication of the matrics is:\n");
        int m[e][h];
        int x, y;
        for (x = 0; x < e; x++)
        {
            for (y = 0; y < h; y++)
            {
                int k = 0;
                for (int w = 0; w < e; w++)
                {
                    k = k + (a[x][w]) * (b[w][y]);
                }
                m[x][y] = k;
            }
        }
        for (int o = 0; o < x; o++)
        {
            printf("%c ", c[0]);
            for (int p = 0; p < y; p++)
            {
                printf("%d ", m[o][p]);
            }
            printf("%c\n", c[0]);
        }
    }
    else
    {
        printf("Wrong format...");
    }
    return 0;
}