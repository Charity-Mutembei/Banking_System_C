#include <stdio.h>
#include "main.h"

void createAccount(char fname[], char lname[], int *identification_number) {
    printf("Please input your First name: ");
    scanf("%s", fname);
    printf("Please input your Last Name ");
    scanf("%s", lname);

    printf("Please input your ID number: ");
    scanf("%d", identification_number);
}