#include <stdio.h>
#include <math.h>

float solve();

int main()
{
    float k;
    float q, radian;  
    const float PI = 3.14159;
    printf("enter the value of x:\n");
    scanf("%d", &q);
    k = solve(q);
    printf("sin(x)=%f\n", k);
    radian = q * (PI / 180.0);  
   printf("Sin(%f) = %f\n", q, sin(radian));
}
float solve(int a)
{
    int z, q = 0, k, y = 1, p;
    for (int i = 0; i < 10; i++)
    {
        k = pow(a, y);
        z = 1;
        int s = 1;
        for (int j = 0; j < y; j++)
        {
            s = s * z;
            z++;
        }

        q = q + k / s;
        y = y + 1;
    }
    return (q);
}