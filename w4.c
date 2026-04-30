#include <stdio.h>
int main()
{
    int t_a, t_b, t_c;
    int total_players, remaining_players;

    printf("Enter the number of players in each team:\n");
    printf("Team A: ");
    scanf("%d", &t_a);      
    printf("Team B: ");
    scanf("%d", &t_b);
    printf("Team C: ");
    scanf("%d", &t_c);
    total_players = (9 * t_b) + (6 * t_c);
    remaining_players = t_a - total_players;
    printf("Total players: %d\n", total_players);
    printf("Remaining players after one is removed: %d\n", remaining_players);
    

}