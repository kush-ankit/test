#include <stdio.h>
int factorialvalue();
int main()
{ 
    int i, fact;
    printf("ENTER THE VALUE:");
    scanf("%d", &i);

    fact=factorialvalue(i);
    printf("%d", fact);
    return 0;
}
int factorialvalue(int a)
{
    int f;
    f = 1;
    for (int x = 1; x <= a; x++)
    {
        f = f * x;
    }
    return (f);
}