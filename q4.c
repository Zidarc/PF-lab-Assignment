/*
QUESTION 4
*/

#include <stdio.h>

int main(){
    int card[5]; //To hold 5 cards of User
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    printf("----------------------FULL HOUSE SYSTEM----------------------\n\n");
    printf("Card Values:\n");
    printf("  1    = Ace\n");
    printf("  2-10 = Cards numbered Two through Ten\n");
    printf("  11   = Jack\n");
    printf("  12   = Queen\n");
    printf("  13   = King\n\n");

    printf("Enter Your Cards: ");
    scanf("%d %d %d %d %d", &card[0], &card[1], &card[2], &card[3], &card[4]);

    // Checking For Valid Input
    if (card[0] < 1 || card[0] > 13 || card[1] < 1 || card[1] > 13 || card[2] < 1 || card[2] > 13 ||
        card[3] < 1 || card[3] > 13 || card[4] < 1 || card[4] > 13) {
        printf("Cards must be between 1 and 13\n");
        return 0;
    }
     // Check for card[0]
    if (card[0] == card[0]) c1++;
    if (card[0] == card[1]) c1++;
    if (card[0] == card[2]) c1++;
    if (card[0] == card[3]) c1++;
    if (card[0] == card[4]) c1++;

    // Check for card[1]
    if (card[1] == card[0]) c2++;
    if (card[1] == card[1]) c2++;
    if (card[1] == card[2]) c2++;
    if (card[1] == card[3]) c2++;
    if (card[1] == card[4]) c2++;

    // Check for card[2]
    if (card[2] == card[0]) c3++;
    if (card[2] == card[1]) c3++;
    if (card[2] == card[2]) c3++;
    if (card[2] == card[3]) c3++;
    if (card[2] == card[4]) c3++;

    // Check for card[3]
    if (card[3] == card[0]) c4++;
    if (card[3] == card[1]) c4++;
    if (card[3] == card[2]) c4++;
    if (card[3] == card[3]) c4++;
    if (card[3] == card[4]) c4++;

    // Check for card[4]
    if (card[4] == card[0]) c5++;
    if (card[4] == card[1]) c5++;
    if (card[4] == card[2]) c5++;
    if (card[4] == card[3]) c5++;
    if (card[4] == card[4]) c5++;

    if ((c1 == 3 || c2 == 3 || c3 == 3 || c4 == 3 || c5 == 3) && (c1 == 2 || c2 == 2 || c3 == 2 || c4 == 2 || c5 == 2)) {
        printf("=====================================================================\n");
        printf("Woohoo!! It's a Full House!\n");
    }
    else {
        printf("=====================================================================\n");
        printf("Hmmmm! Not a Full House.\n");
    }

    return 0;
}
