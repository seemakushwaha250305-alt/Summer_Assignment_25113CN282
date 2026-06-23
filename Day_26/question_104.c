#include <stdio.h>

int main() {
    int scoreSum = 0;
    int selectedAns;

    printf("=== Technology Context Assessment Trivia ===\n\n");

    // Question No 1
    printf("Q1. What entity serves as the foundation primitive array address location?\n");
    printf("1) Pointer to element index zero\n2) Last node parameter address reference\n3) Garbage allocation storage\n");
    printf("Select answer index: ");
    scanf("%d", &selectedAns);
    if(selectedAns == 1) { scoreSum++; printf("Correct!\n\n"); } else { printf("Incorrect.\n\n"); }

    // Question No 2
    printf("Q2. Which option matches standard character encoding size parameters in C?\n");
    printf("1) 4 Bytes\n2) 1 Byte\n3) 8 Bytes\n");
    printf("Select answer index: ");
    scanf("%d", &selectedAns);
    if(selectedAns == 2) { scoreSum++; printf("Correct!\n\n"); } else { printf("Incorrect.\n\n"); }

    printf("Assessment processing finished! Final score outcome evaluated: %d/2\n", scoreSum);
    return 0;
}