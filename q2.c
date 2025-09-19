/*
QUESTION 2
Assumptions Made:
1) Not mentioned that points can only be Integer, So used Float to showcase
   Real Numbers (limited it to 3 decimal places for Visibility and Readability)

2) The system repeats itself only two times shown. Since it's copy pasted
*/
#include <stdio.h>
#include <stdlib.h> //To clear screen after each run
int main(){
    float xCoords, yCoords;
    int continueval; //Flag that checks if User want to continue or not

    printf("----------------------QUADRANT FINDER SYSTEM----------------------\n\n");

    printf("Enter Your Coordinate X (Up Till 3 Decimal Places): ");
    scanf("%f", &xCoords);

    printf("Enter Your Coordinate Y (Up Till 3 Decimal Places): ");
    scanf("%f", &yCoords);

    printf("\nPlease Wait As The Systems Finds The Quadrant...\n");
    printf("Clearing The Dust...\n");
    printf("Oiling The Gears...\n");
    printf("Presenting the Values...\n\n");

    if(xCoords > 0 && yCoords > 0) {
        printf("The point (%.3f, %.3f) lies in quadrant I\n", xCoords, yCoords);
    }
    else if(xCoords < 0 && yCoords > 0) {
        printf("The point (%.3f, %.3f) lies in quadrant II\n", xCoords, yCoords);
    }
    else if(xCoords < 0 && yCoords < 0) {
        printf("The point (%.3f, %.3f) lies in quadrant III\n", xCoords, yCoords);
    }
    else if(xCoords > 0 && yCoords < 0) {
        printf("The point (%.3f, %.3f) lies in quadrant IV\n", xCoords, yCoords);
    }

    //check for in case of Zero in any coordinate
    if (xCoords == 0 && yCoords == 0) {
        printf("The point (%.3f, %.3f) lies at Origin\n", xCoords, yCoords);
    }
    else if (xCoords == 0 && yCoords > 0) {
        printf("The point (%.3f, %.3f) lies at +ve Y-AXIS\n", xCoords, yCoords);
    }
    else if(xCoords == 0 && yCoords < 0) {
        printf("The point (%.3f, %.3f) lies at -ve Y-AXIS\n", xCoords, yCoords);
    }
    else if(xCoords > 0 && yCoords == 0) {
        printf("The point (%.3f, %.3f) lies at +ve X-AXIS", xCoords, yCoords);
    }
    else if(xCoords < 0 && yCoords == 0) {
        printf("The point (%.3f, %.3f) lies at -ve X-AXIS", xCoords, yCoords);
    }

    printf("\nThank You For Using Our Services\n");
    printf("=====================================================================\n");
    printf("Do You Have More Coordinates? (0 = Continue, 1 = Ending This Session): ");
    scanf("%d", &continueval);

    if (continueval == 1){
        return 0;
    }

    //THE CODE RESTARTS AGAIN HERE(technically a loop)
    //===========================================================================
    system("cls");

    printf("----------------------QUADRANT FINDER SYSTEM----------------------\n\n");

    printf("Enter Your Coordinate X (Up Till 3 Decimal Places): ");
    scanf("%f", &xCoords);

    printf("Enter Your Coordinate Y (Up Till 3 Decimal Places): ");
    scanf("%f", &yCoords);

    printf("\nPlease Wait As The Systems Finds The Quadrant...\n");
    printf("Clearing The Dust...\n");
    printf("Oiling The Gears...\n");
    printf("Presenting the Values...\n\n");

    if(xCoords > 0 && yCoords > 0) {
        printf("The point (%.3f, %.3f) lies in quadrant I\n", xCoords, yCoords);
    }
    else if(xCoords < 0 && yCoords > 0) {
        printf("The point (%.3f, %.3f) lies in quadrant II\n", xCoords, yCoords);
    }
    else if(xCoords < 0 && yCoords < 0) {
        printf("The point (%.3f, %.3f) lies in quadrant III\n", xCoords, yCoords);
    }
    else if(xCoords > 0 && yCoords < 0) {
        printf("The point (%.3f, %.3f) lies in quadrant IV\n", xCoords, yCoords);
    }

    //check for in case of Zero in any coordinate
    if (xCoords == 0 && yCoords == 0) {
        printf("The point (%.3f, %.3f) lies at Origin\n", xCoords, yCoords);
    }
    else if (xCoords == 0 && yCoords > 0) {
        printf("The point (%.3f, %.3f) lies at +ve Y-AXIS\n", xCoords, yCoords);
    }
    else if(xCoords == 0 && yCoords < 0) {
        printf("The point (%.3f, %.3f) lies at -ve Y-AXIS\n", xCoords, yCoords);
    }
    else if(xCoords > 0 && yCoords == 0) {
        printf("The point (%.3f, %.3f) lies at +ve X-AXIS", xCoords, yCoords);
    }
    else if(xCoords < 0 && yCoords == 0) {
        printf("The point (%.3f, %.3f) lies at -ve X-AXIS", xCoords, yCoords);
    }

    printf("\nThank You For Using Our Services\n");
    printf("=====================================================================\n");

    return 0;
}
