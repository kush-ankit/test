#include <stdio.h>

int main()
{
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
    {
        for (int x = 65; x <= (65 + a) - i; x++)
        {
            printf("%c", x);
        }
        for (int y = 1; y <= 2 * i; y++)
        {
            printf(" ");
        }
        for (int z = (65 + a) - i; z >= 65; z--)
        {
            printf("%c", z);
        }
        printf("\n");
    }
    return 0;
}