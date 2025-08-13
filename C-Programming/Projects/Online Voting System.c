#include <stdio.h>
#include <string.h>

#define MAX_C 11 // defining max number of candidates

// Structure of candidate
typedef struct Candidate {
    char name[50];
    int votes;
    char symbol;
} Candidate;

// global array of candidate details
Candidate allCandidates[MAX_C];
int candidateCount = 0; // count of candidates

// global array to store all symbols
char symbols[10] = { '!', '@', '#', '$', '%', '^', '&', '*', '~', '+' };
// array to keep track of taken symbols
int symbolTaken[11];

// function declarations
void fillCandidate(int);
void displayAllCandidates();
void getVotes(int);
void getResults();

// driver code
int main() {
    int i, numVoters;

    for (i = 0; i < 11; i++) {
        symbolTaken[i] = 0;
    }

    // getting the number of candidates
    printf("Enter the number of candidates: ");
    scanf("%d", &candidateCount);
    if (candidateCount > MAX_C - 1) {
        printf("Number of candidates cannot be greater than 10.\nTerminating the program.\n\n");
        return 0;
    }

    // filling the details of candidates
    for (i = 0; i < candidateCount; i++) {
        fillCandidate(i);
    }

    // getting the number of voters
    printf("Enter the number of voters: ");
    scanf("%d", &numVoters);

    // collecting votes
    for (i = 0; i < numVoters; i++) {
        getVotes(i);
    }

    // printing results
    getResults();

    return 0;
}

// function to populate candidate details
void fillCandidate(int cNum) {
    int j, num = 0;
    int valid = 0;

    while (!valid) {
        printf("\nAvailable Symbols: \n");
        for (j = 0; j < 10; j++) {
            if (!symbolTaken[j]) {
                printf("%d  %c\n", j + 1, symbols[j]);
            }
        }

        printf("Enter the symbol number of candidate %d: ", cNum + 1);
        scanf("%d", &num);

        if (num <= 0 || num > 10 || symbolTaken[num - 1]) {
            printf("This symbol is not available. Please choose again.\n");
        } else {
            symbolTaken[num - 1] = 1;
            allCandidates[cNum].symbol = symbols[num - 1];
            printf("Enter the name of candidate %d: ", cNum + 1);
            scanf(" %49s", allCandidates[cNum].name);
            allCandidates[cNum].votes = 0;
            valid = 1;
        }
    }
}

// function to display candidates
void displayAllCandidates() {
    int j;

    if (candidateCount == 0) {
        printf("No candidates available.\n");
        return;
    }

    for (j = 0; j < candidateCount; j++) {
        printf("%s\t\t", allCandidates[j].name);
    }
    printf("\n");
    for (j = 0; j < candidateCount; j++) {
        printf("%3c\t\t", allCandidates[j].symbol);
    }
    printf("\n");
}

// function to get votes
void getVotes(int voterCount) {
    int choice, valid = 0;

    while (!valid) {
        displayAllCandidates();
        printf("Voter %d, please enter your choice (1-%d): ",
               voterCount + 1, candidateCount);
        scanf("%d", &choice);

        if (choice >= 1 && choice <= candidateCount) {
            allCandidates[choice - 1].votes++;
            valid = 1;
        } else {
            printf("Invalid choice! Please vote again.\n");
        }
    }
}

// function to get results
void getResults() {
    int i;
    int maxVotes = 0;
    int winnerIndex = -1;
    int winnerFrequency = 0;

    for (i = 0; i < candidateCount; i++) {
        if (allCandidates[i].votes > maxVotes) {
            maxVotes = allCandidates[i].votes;
            winnerIndex = i;
        }
    }

    for (i = 0; i < candidateCount; i++) {
        if (allCandidates[i].votes == maxVotes) {
            winnerFrequency++;
        }
    }

    printf("\n-----RESULT-----\n");

    if (winnerFrequency > 1) {
        printf("No candidate has majority votes.\n");
    } else if (winnerIndex != -1) {
        printf("The winner is: %s\nCandidate Symbol: %c\nwith %d votes!\n",
               allCandidates[winnerIndex].name,
               allCandidates[winnerIndex].symbol, maxVotes);
    } else {
        printf("No winner.\n");
    }
}

