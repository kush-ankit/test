#include <stdio.h>

int power();

int main()
{
    char y;
    do
    {
        int a, b, ans;
        printf("ENTER THE NUMBER THEN POWER:");
        scanf("%d %d", &a, &b);
        ans = power(a, b);
        printf("%d", ans);
        printf("\ndo you want to calculate again:\n");
        scanf(" %c", &y);
    } while ('y' == y);

    return 0;
}
int power(int a, int b)
{
    int f;
    f = 1;
    for (int x = 0; x < b; x++)
    {
        f = f * a;
    }
    return (f);
}