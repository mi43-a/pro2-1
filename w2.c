#include <stdio.h>
int main()
{
    double a, b, c;
    int avg;

    printf("Enter three real numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    avg = (int)((a + b + c) / 3);
    
    printf("Average is %d\n", avg);
    
    return 0;
}