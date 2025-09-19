/*
QUESTION 3
*/
#include <stdio.h>

int main (){
    int age;
    char eyeTest, writtenTest, drivingTest, medCertificate;
    printf("----------------------LICENSE ELIGIBILTY SYSTEM----------------------\n\n");

    printf("Please Enter Your Age: ");
    scanf("%d", &age);

    if (age < 0){
        printf("Please Enter A Valid Value\n");
        return 0;
    }

    //Age Check
    if (age >= 18){
        printf("Please Enter Your Result For Eye Test (P = Passed, F = Failed): ");
        scanf(" %c", &eyeTest);

        //Eye Test
        if (eyeTest == 'P'){
            printf("Please Enter Your Written Test Result (P = Passed, F = Failed): ");
            scanf(" %c", &writtenTest);

            //Written Test Check
            if (writtenTest == 'P'){
                printf("Please Enter Your Driving Test Result (P = Passed, F = Failed): ");
                scanf(" %c", &drivingTest);

                //Driving Test Check
                if (drivingTest == 'P'){

                    if (age < 60){
                        printf("=====================================================================\n");
                        printf("\nCONGRATULATON!!\n");
                        printf("YOU ARE ELIGIBLE FOR LICENSE\n");
                        return 0;
                    }
                    else {
                        printf("Do You Have Your Medical Fitness Certificate (P = YES, F = NO): ");
                        scanf(" %c", &medCertificate);

                        //Medical Certificate Check
                        if (medCertificate == 'P'){
                            printf("=====================================================================\n");
                            printf("\nCONGRATULATON!!\n");
                            printf("YOU ARE ELIGIBLE FOR LICENSE\n");
                            return 0;
                        }
                        else if(medCertificate == 'F'){
                            printf("Sorry! You are not Eligible\n");
                            printf("Remarks: Please Get Your Medical Fitness Certificate\n");
                            return 0;
                        }
                        else {
                            printf("Please Enter Valid Value\n");
                            return 0;
                        }
                    }
                }
                else if(drivingTest == 'F'){
                    printf("Sorry! You are not Eligible\n");
                    printf("Remarks: Please Pass Your Driving Test\n");
                    return 0;
                }
                else{
                    printf("Please Enter Valid Value\n");
                    return 0;
                }
            }
            else if (writtenTest == 'F'){
                printf("Sorry! You are not Eligible\n");
                printf("Remarks: Please Pass Your Written Test\n");
                return 0;
            }
            else {
                printf("Please Enter Valid Value\n");
                return 0;
            }
        }
        else if (eyeTest == 'F'){
            printf("Sorry! You are not Eligible\n");
            printf("Remarks: Please Get Prescription For Your Glasses\n");
            return 0;
        }
        else {
            printf("Please Enter Valid Value\n");
            return 0;
        }
    }
    else{
        printf("Sorry! You are not Eligible\n");
        printf("Remarks: Under Age\n");
        return 0;
    }
}
