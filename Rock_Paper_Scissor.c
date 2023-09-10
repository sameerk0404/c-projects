#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(char c, char u);

int main()
{
    char u, c;
    srand(time(0));
    int n, p;

    printf("Welcome to the Rock, Paper, Scissors game!\n");
    printf("\nHere you will play this game aganist computer\n\n");
play:
    n = rand() % 3;

    if (n == 0)
    {
        c = 'R';
    }
    else if (n == 1)
    {
        c = 'P';
    }
    else
    {
        c = 'S';
    }
    printf("Choose 'R' for Rock, 'P' for Paper, or 'S' for Scissors: ");
    scanf(" %c", &u);
    if (u != 'R' && u != 'r' && u != 'P' && u != 'p' && u != 'S' && u != 's') {
        printf("Invalid input! Please choose 'R', 'P', or 'S'.\n\n");
        goto play;
    }
    game(c, u);
    printf("\nYou choose %c and computer choose %c",u,c);
    printf("\n\nDo you want to play again? (1 for Yes, 0 for No): ");
    scanf("%d", &p);
    printf("\n");
    if (p == 1)
    {
        goto play;
    }
    printf("Thank you for playing the game!");
    return 0;
}

void game(char c, char u)
{
    if ((u == 'R' || u == 'r') && c == 'S')
    {
        printf("You won!");
    }
    else if ((u == 'R' || u == 'r') && c == 'P')
    {
        printf("You lost!");
    }
    else if ((u == 'P' || u == 'p') && c == 'R')
    {
        printf("You won!");
    }
    else if ((u == 'P' || u == 'p') && c == 'S')
    {
        printf("You lost!");
    }
    else if ((u == 'S' || u == 's') && c == 'P')
    {
        printf("You won!");
    }
    else if ((u == 'S' || u == 's') && c == 'R')
    {
        printf("You lost!");
    }
    else
    {
        printf("It's a draw!");
    }
}
