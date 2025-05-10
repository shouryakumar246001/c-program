#include <stdio.h>
#include <string.h>
#define MAX_PLAYERS 5
struct Cricket {
char player_name[50];
char team_name[50];
float batting_average;
};
void sortPlayers(struct Cricket players[], int n) {
    struct Cricket temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (players[i].batting_average < players[j].batting_average) {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}
void displayPlayers(struct Cricket players[], int n) {
    printf("\nPlayers sorted by Batting Average (Descending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Team: %s, Batting Average: %.2f\n",
               players[i].player_name, players[i].team_name, players[i].batting_average);
    }
}

int main() {
    struct Cricket players[MAX_PLAYERS];
    for (int i = 0; i < MAX_PLAYERS; i++) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].player_name);
        printf("Team: ");
        scanf(" %[^\n]", players[i].team_name);
        printf("Batting Average: ");
        scanf("%f", &players[i].batting_average);
    }
    sortPlayers(players, MAX_PLAYERS);
    displayPlayers(players, MAX_PLAYERS);

    return 0;
}

