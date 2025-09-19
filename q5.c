/*
Question 5
*/

#include <stdio.h>
int main() {
    int counts[10] = {0}; //making sure garbage value is removed
    int num;

    printf("----------------------Number Counter System----------------------\n\n");
    printf("Enter any digits between 0-9 (enter any other number to stop)\n");

    while (1) {
        printf("Enter Digit: ");
        scanf("%d", &num);

        if (num < 0 || num > 9) {
            break;
        }

        counts[num]++; //mapping it
    }

    // Print the table without using loops
    printf("\nNumber   | Number of Occurrences\n");
    printf("-------------------------------\n");
    printf("   0     |   %d\n", counts[0]);
    printf("   1     |   %d\n", counts[1]);
    printf("   2     |   %d\n", counts[2]);
    printf("   3     |   %d\n", counts[3]);
    printf("   4     |   %d\n", counts[4]);
    printf("   5     |   %d\n", counts[5]);
    printf("   6     |   %d\n", counts[6]);
    printf("   7     |   %d\n", counts[7]);
    printf("   8     |   %d\n", counts[8]);
    printf("   9     |   %d\n", counts[9]);

    return 0;
}

