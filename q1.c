/*
QUESTION 1
Assumption Made
1) Since it's said to be automatic, so no user input is taken for existing User Data.
   it's assumed that it's fetched from the Database of the bank.

2)The new transaction Data is asked from User for testing purpose

3)The program only asks for transaction 2 times only as it is just repeat of everything
*/
#include <stdio.h>
#include <string.h> //for strcmp; to compare strings used in checking the user country
#include <stdlib.h> //To clear screen after each run

//Limits on the system to flag
int dailySpendingLimit = 10000; //spending limit is now 10,000 Rs
char acceptedCountry[3][20] = {"Pakistan", "UAE", "Saudi Arabaia"};
int hourlyTransactionLimit = 5;

//User Data fetched from the Bank Database
int transactionCounter = 4; //Transaction happened in the last Hour
int prevSpending = 5000; //Money already spent today



int main (){
    //New Transaction
    char currentCountry[50];
    int spendingAmount;
    int suspiciousFlag = 0; // 0 = True, 1= False
    int continueval; //Flag that checks if User want to continue or not

    //Showing The User Their Data
    printf("                    CURRENT INFORMATION\n");
    printf("Accepted Countries:                 %s, %s, %s\n",  acceptedCountry[0], acceptedCountry[1], acceptedCountry[2] );
    printf("Amount Spend Today:                         %d\n", prevSpending);
    printf("Transactions In The Previous Hour:          %d\n", transactionCounter);
    printf("===============================================================================\n");


    printf("Enter Your Current Country: ");
    scanf("%s", &currentCountry);

    printf("Enter Your Transaction Amount: ");
    scanf("%d", &spendingAmount);

    //checking for valid data input
    if(spendingAmount <0){
        printf("Please Enter Valid Value, Thank You.\n");
        return 0;
    }

    printf("\nThank You For Using Our Bank Please Wait...\n");

    //Check For Country
    if (strcmp(currentCountry, acceptedCountry[0]) == 0
        || strcmp(currentCountry, acceptedCountry[1]) == 0
        || strcmp(currentCountry, acceptedCountry[2]) == 0){
        printf("Country accepted...\n");
    }
    else{
        printf("Country not accepted...\n");
        suspiciousFlag = 1;
    }

    //Check For Spending Limit
    if (prevSpending+spendingAmount > dailySpendingLimit){
        printf("Daily Spending Limit Exceeded...\n");
        suspiciousFlag = 1;
    }
    else if (prevSpending+spendingAmount == dailySpendingLimit){
        printf("Caution: Daily Spending limit reached...\n");
    }
    else{
        printf("Transaction Amount Accepted...\n");
    }

    //Checking for Hourly Transaction Counter Limit
    if (transactionCounter + 1 > hourlyTransactionLimit){
        printf("Hourly Transaction Limit Exceeded...\n");
    }
    else if(transactionCounter + 1 == hourlyTransactionLimit){
        printf("Caution: Hourly limit reached...\n");
    }
    else{
        printf("Under Transaction Limit...\n");
    }

    printf("------------------------------------------------------\n");

    if (suspiciousFlag == 1){
        printf("This Transaction Has Been Flagged As Suspicious, It will be reviewed first\n");
    }
    else{
        printf("This Transaction Has Been Accepted\n");
        transactionCounter += 1;
        prevSpending = prevSpending + spendingAmount;
        suspiciousFlag = 0;
    }

    printf("------------------------------------------------------\n");
    printf("Thank You For Using Our Services\n");

    printf("Do You Have More Transactions? (0 = Continue, 1 = Ending This Session): ");
    scanf("%d", &continueval);

    if (continueval == 1){
        return 0;
    }

    //THE CODE RESTARTS AGAIN HERE(technically a loop)
    //===========================================================================
    system("cls");

    //Showing The User Their Data
    printf("                    CURRENT INFORMATION\n");
    printf("Accepted Countries:                 %s, %s, %s\n",  acceptedCountry[0], acceptedCountry[1], acceptedCountry[2] );
    printf("Amount Spend Today:                         %d\n", prevSpending);
    printf("Transactions In The Previous Hour:          %d\n", transactionCounter);
    printf("===============================================================================\n");


    printf("Enter Your Current Country: ");
    scanf("%s", &currentCountry);

    printf("Enter Your Transaction Amount: ");
    scanf("%d", &spendingAmount);

    //checking for valid data input
    if(spendingAmount <0){
        printf("Please Enter Valid Value, Thank You.\n");
        return 0;
    }

    printf("\nThank You For Using Our Bank Please Wait...\n");

    //Check For Country
    if (strcmp(currentCountry, acceptedCountry[0]) == 0
        || strcmp(currentCountry, acceptedCountry[1]) == 0
        || strcmp(currentCountry, acceptedCountry[2]) == 0){
        printf("Country accepted...\n");
    }
    else{
        printf("Country not accepted...\n");
        suspiciousFlag = 1;
    }

    //Check For Spending Limit
    if (prevSpending+spendingAmount > dailySpendingLimit){
        printf("Daily Spending Limit Exceeded...\n");
        suspiciousFlag = 1;
    }
    else if (prevSpending+spendingAmount == dailySpendingLimit){
        printf("Caution: Daily Spending limit reached...\n");
    }
    else{
        printf("Transaction Amount Accepted...\n");
    }

    //Checking for Hourly Transaction Counter Limit
    if (transactionCounter + 1 > hourlyTransactionLimit){
        printf("Hourly Transaction Limit Exceeded...\n");
    }
    else if(transactionCounter + 1 == hourlyTransactionLimit){
        printf("Caution: Hourly limit reached...\n");
    }
    else{
        printf("Under Transaction Limit...\n");
    }

    printf("------------------------------------------------------\n");

    if (suspiciousFlag == 1){
        printf("This Transaction Has Been Flagged As Suspicious, It will be reviewed first\n");
    }
    else{
        printf("This Transaction Has Been Accepted\n");
        transactionCounter += 1;
        prevSpending = prevSpending + spendingAmount;
        suspiciousFlag = 0;
    }

    printf("------------------------------------------------------\n");
    printf("Thank You For Using Our Services\n");

    return 0;
}


