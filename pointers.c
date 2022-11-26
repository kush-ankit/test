#include <stdio.h>
int isum();
float isavg();
float stdvt();

int main()
{
    int a, b, c, d, e, sum;
    float stad,avg ;
    printf("ENTER FIVE NUMBERS\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum = isum(a, b, c, d, e);
    printf("%d\n", sum);
    avg = isavg(a, b, c, d, e);
    printf("%f\n", avg);
    stad = stdvt(a, b, c, d, e);
    printf("%f\n", stad);
}
int isum(int a, int b, int c, int d, int e)
{
    int suma;
    suma = a + b + c + d + e;
    return (suma);
}
float isavg(int a, int b, int c, int d, int e)
{
    float avga;
    avga = (a + b + c + d + e) / 5;
    return (avga);
}
float stdvt(int a, int b, int c, int d, int e)
{
    float stda;
    stda = (a * a + b * b + c * c + d * d + e * e) / 4;
    return (stda);
}