#include <stdio.h>

void createAccount(char fname[], char lname[], int *identification_number);

int main() {
    int choice, confirmation, identification_number, details_confirmation;
    char fname[100], lname[100];

    printf("Hello, Welcome.\n");
    printf("How can we help today!\n");
    printf("Select from the MENU\n");
    printf(
        "1. Create an account as a new user\n"
        "2. Withdraw from your account\n"
        "3. Transfer funds from your account\n"
        "4. Deposit money to your account\n"
        "5. Contact support\n"
        "6. Close and Delete your account\n"
        "7. Exit\n"
    );

    scanf("%d", &choice);
    printf("This was your selection: %d\n", choice);
    
    printf("Please confirm with:\n1. Yes\n2. No\n");
    scanf("%d", &confirmation);

    switch (confirmation) {
        case 1:
            if (choice == 1) {
                createAccount(fname, lname, &identification_number);
                printf("Confirm the following details:\n");
                printf("First Name: %s\n", fname);
                printf("Last Name: %s\n", lname);
                printf("ID: %d\n", identification_number);

                printf("Input 1 for Yes\nInput 2 for No\n");
                scanf("%d", &details_confirmation);

                if (details_confirmation == 1) {
                    printf("Hello, %s %s \n", fname, lname);
                }
            }
            break;
        default:
            break;
    }

    return 0;
}

void createAccount(char fname[], char lname[], int *identification_number) {
    printf("Please input your First name: ");
    scanf("%s", fname);
    printf("Please input your Last Name ");
    scanf("%s", lname);

    printf("Please input your ID number: ");
    scanf("%d", identification_number);
}
