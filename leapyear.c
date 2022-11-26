#include <stdio.h>

void leapyear();
int main()
{
    int a;
    printf("ENTER THE YEAR:");
    scanf("%d", &a);

    leapyear(a);
    return 0;
}
void leapyear(int x)
{
    if ((x - 2020) % 4 == 0)
    {
        printf("This is a leap year\n");
    }
    else
    {
        printf("This not a leap year\n");
    }
}