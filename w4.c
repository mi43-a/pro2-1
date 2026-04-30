#include <stdio.h>
int main()
{
    int a, b, c;
    int total_players, remaining_players;

    printf("Enter the number of students in the class: ");
    scanf("%d", &a);
    printf("Enter the number of baseball teams: ");
    scanf("%d", &b);
    printf("Enter the number of volleyball teams: ");
    scanf("%d", &c);
    total_players = (9 * b) + (6 * c);
    remaining_players = a - total_players;
    printf("Total players: %d\n", total_players);
    printf("Remaining players after one is removed: %d\n", remaining_players);
    
    return 0;
}