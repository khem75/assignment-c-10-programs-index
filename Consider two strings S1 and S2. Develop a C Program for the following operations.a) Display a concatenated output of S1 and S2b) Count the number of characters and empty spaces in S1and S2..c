#include <stdio.h>
#include <string.h>

// Function to display concatenated output of S1 and S2
void concatenateStrings(char s1[], char s2[]) {
    printf("Concatenated Output of S1 and S2: %s%s\n", s1, s2);
}

// Function to count characters and empty spaces in S1 and S2
void countCharactersAndSpaces(char s1[], char s2[]) {
    int countCharacters = 0, countSpaces = 0;

    // Count characters and empty spaces in S1
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != ' ') {
            countCharacters++;
        } else {
            countSpaces++;
        }
    }

    // Count characters and empty spaces in S2
    for (int i = 0; i < strlen(s2); i++) {
        if (s2[i] != ' ') {
            countCharacters++;
        } else {
            countSpaces++;
        }
    }

    printf("Number of characters in S1 and S2: %d\n", countCharacters);
    printf("Number of empty spaces in S1 and S2: %d\n", countSpaces);
}

int main() {
    char S1[100], S2[100];

    // Input strings S1 and S2
    printf("Enter the string S1: ");
    gets(S1);

    printf("Enter the string S2: ");
    gets(S2);

    // Display concatenated output of S1 and S2
    concatenateStrings(S1, S2);

    // Count characters and empty spaces in S1 and S2
    countCharactersAndSpaces(S1, S2);

    return 0;
}

