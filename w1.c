#include<stdio.h>
int main()
{
    double a, b, c, avg;

    printf("enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    avg = (a + b + c) / 3;
    printf("average is %lf\n", avg);
    return 0;
}
