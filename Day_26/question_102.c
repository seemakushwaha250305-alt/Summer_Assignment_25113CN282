#include <stdio.h>

int main() {
    int userAge;
    printf("=== Voting Eligibility Portal ===\n");
    printf("Please specify current age metrics: ");
    scanf("%d", &userAge);

    if(userAge >= 18) {
        printf("Status: Eligible to cast a vote.\n");
    } else {
        printf("Status: Not eligible. Minimum wait requirement remaining: %d year(s).\n", 18 - userAge);
    }
    return 0;
}