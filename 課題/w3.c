#include <stdio.h>
int main()
{
    int apple = 100, orange = 88, strawberry = 398;
    int a_count, o_count, s_count;
    int total_price;

    printf("Enter the quantity of each fruit:\n");
    printf("Apple: ");
    scanf("%d", &a_count);
    printf("Orange: ");
    scanf("%d", &o_count);
    printf("Strawberry: ");
    scanf("%d", &s_count);

    total_price = (a_count * apple) + (o_count * orange) + (s_count * strawberry);

    printf("Total price is %d yen", total_price);
    
    return 0;
}