#include<stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double max;
    if (a > b && a > c) max = a;
    else if (b > a && a > c) max = b;
    else if (c > a && c > b) max = c;
    printf("Max = %lf", max);
    return 0;
}