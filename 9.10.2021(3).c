
#include <stdio.h>
#include <stdlib.h>

typedef struct Player{
    char name[30];
    int jersey;
    int age;
    char club[50];
    float monthly;
    int games;
    int daily;
} Player;

int n = 11;

void add_info(Player *player){
    int i;
    printf("Enter the name of a player: ");
    fflush(stdin);
    scanf("%[^\n]s", player->name);
    printf("Enter the jersey number of the player: ");
    scanf("%d", &player->jersey);
    printf("Enter the age of the player: ");
    scanf("%d", &player->age);
    printf("Enter the club of the player: ");
    fflush(stdin);
    scanf("%[^\n]s", player->club);
    printf("Enter the monthly wage of the player: ");
    scanf("%f", &player->monthly);
    printf("Number of games played in a year: ");
    scanf("%d", &player->games);
    printf("Enter the earning from a game:");
    scanf("%d", &player->daily);

    system("cls");
}
void view_info(Player player[]){
    system("cls");
    int i, j;
    int a_income, a_game = 0;
    printf("\n\n \t\t\t ***************  Player Info.  ***********************\n\n");
    printf("Name\t\tJersey\tAge\tClub Name\tMonthly Wage\tGames Played\tIncome From Game\tAnnual Income\n\n");

    for(i = 0; i < n; i++){
        printf("%-10s", player[i].name);
        printf("\t%d", player[i].jersey);
        printf("\t%d", player[i].age);
        printf("\t%-15s", player[i].club);
        printf("\t%.2f", player[i].monthly);
        printf("\t\t%d",player[i].games);
        a_game = (player[i].games) * (player[i].daily);
        a_income = a_game + (player[i].monthly*12);
        printf("\t\t%d", a_game);
        printf("\t\t\t%d", a_income);
        printf("\n");
    }
}

int main(){
    int i;
    Player player[n];
    for(i = 0; i < n; i++){
        add_info(&player[i]);
    }
    view_info(player);
    return 0;
}
