#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    for (;;) {
        printf("Enter account number (-1 to end): ");
        scanf_s("%d", &accountNumber);

        if (accountNumber == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        scanf_s("%lf", &beginningBalance);
        printf("Enter total charges: ");
        scanf_s("%lf", &totalCharges);
        printf("Enter total credits: ");
        scanf_s("%lf", &totalCredits);
        printf("Enter credit limit: ");
        scanf_s("%lf", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        printf("Account: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);

        if (newBalance > creditLimit) {
            printf("Credit Limit Exceeded.\n");
        }
    }

    return 0;
}
