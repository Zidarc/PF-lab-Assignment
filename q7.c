/*#include <stdio.h>
int main() {
    int value;
    printf("Enter a value in the range 1 till 7: ");
    scanf("%d", &value);
    if (value == 1) {
        printf("You entered Monday\n");
    } else if (value == 2) {
        printf("You entered Tuesday\n");
    } else if (value == 3) {
        printf("You entered Wednesday\n");
    } else if (value == 4) {
        printf("You entered Thursday\n");
    } else if (value == 5) {
        printf("You entered Friday\n");
    } else if (value == 6) {
        printf("You entered Saturday\n");
    } else if (value == 7) {
        printf("You entered Sunday\n");
    } else {
        printf("Value out of range!\n");
    }
    return 0;
}
*/

#include <stdio.h>
int main() {
    int value;
    printf("Enter a value in the range 1 till 7: ");
    scanf("%d", &value);
    switch (value) {
        case 1:
            printf("You entered Monday\n");
            break;
        case 2:
            printf("You entered Tuesday\n");
            break;
        case 3:
            printf("You entered Wednesday\n");
            break;
        case 4:
            printf("You entered Thursday\n");
            break;
        case 5:
            printf("You entered Friday\n");
            break;
        case 6:
            printf("You entered Saturday\n");
            break;
        case 7:
            printf("You entered Sunday\n");
            break;
        default:
            printf("Value out of range!\n");
    }
    return 0;
}

