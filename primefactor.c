#include <stdio.h>

void primefactor();
int main()
{
    int a;
    printf("ENTER A NUMBER:\n");
    scanf("%d", &a);
    primefactor(a);

    return 0;
}
void primefactor(int a)
{
    int z, p;
    z==p;
    z = 2;
    for (int x = 0; x < p; x++)
    {
        if (a % z == 0)
        {
            printf("%d ", z);
            a = a / z;
        }
        else
        {
            z = z + 1;
        }
        if (a == 1)
        {
            break;
        }
    }
}
