#include<stdio.h>
int main()
{
    double a, b, c, avg;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    avg = (a + b + c) / 3;
    
    printf("Average is %lf\n", avg);
    
    return 0;
}
