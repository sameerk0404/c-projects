#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PARTIES 6

typedef struct {
    int id;
    char name[50];
    int votes;
} var;

var party[MAX_PARTIES];

void parties();
void display();
int Vote();
void results();

int main() {
    char ID_num[20];
    int a, id;
    parties();
    printf("Welcome to the Online Voting System!\n");
    printf("\nEnter your Voter ID number : ");
    scanf("%s",ID_num);
    while (1) {
        printf("\n1. Display all parties\n");
        printf("2. Cast Vote\n");
        printf("3. Display live vote counts\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);
        switch (a) {
            case 1:
                display();
                break;
            case 2:
                printf("\nEnter the party ID to cast your vote: ");
                scanf("%d", &id);
                if (Vote(id)) {
                    printf("Vote casted successfully!\n");
                } else {
                    printf("Invalid party ID. Please try again.\n");
                }
                break;
            case 3:
                results();
                break;
            case 4:
                printf("Thank you for using the Online Voting System!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void parties() {
    party[1].id = 1;
    strcpy(party[1].name, "Bharatiya Janata Party(BJP)");
    party[1].votes = 0;

    party[2].id = 2;
    strcpy(party[2].name, "Bahujan Samaj Party(BSP)");
    party[2].votes = 0;

    party[3].id = 3;
    strcpy(party[3].name, "Indian National Congress(INC)");
    party[3].votes = 0;

    party[4].id = 4;
    strcpy(party[4].name, "Communist Party of India(CPI)");
    party[4].votes = 0;

    party[5].id = 5;
    strcpy(party[5].name, "Nationalist Congress Party(NCP)");
    party[5].votes = 0;
}

void display() {
    int i;
    printf("\nAll political parties:\n");
    for (i = 1; i < MAX_PARTIES; i++) {
        printf("%d. %s\n", party[i].id, party[i].name);
    }
}

int Vote(int id) {
    if (id >= 1 && id < MAX_PARTIES) {
        party[id].votes++;
        return 1;
    }
    return 0;
}

void results() {
    int i;
    printf("\nVoting Results:\n");
    for (i = 1; i < MAX_PARTIES; i++) {
        printf("%s: %d votes\n", party[i].name, party[i].votes);
    }
}

