#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int accNo;
    char name[50];
    float balance;
} Account;

// Function Prototypes using Pointers
void deposit(Account *acc);
void withdraw(Account *acc);
void saveData(Account acc);

int main() {
    Account myAcc = {0, "", 0.0};
    int choice;

    // Load existing data if available
    FILE *file = fopen("bank.dat", "rb");
    if (file) {
        fread(&myAcc, sizeof(Account), 1, file);
        fclose(file);
    }

    do {
        printf("\n--- MINI BANK SYSTEM ---");
        printf("\n1. Create/View Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (myAcc.accNo == 0) {
                    printf("Enter Account Number: "); scanf("%d", &myAcc.accNo);
                    printf("Enter Name: "); scanf("%s", myAcc.name);
                    myAcc.balance = 0;
                }
                printf("\nAccount: %d | Holder: %s", myAcc.accNo, myAcc.name);
                break;
            case 2: deposit(&myAcc); break;
            case 3: withdraw(&myAcc); break;
            case 4: printf("\nCurrent Balance: $%.2f\n", myAcc.balance); break;
            case 5: 
                saveData(myAcc);
                printf("Data saved. Goodbye!\n");
                break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}

void deposit(Account *acc) {
    float amt;
    printf("Enter amount to deposit: ");
    scanf("%f", &amt);
    acc->balance += amt; // Using -> to access struct member via pointer
    printf("Deposit successful!");
}

void withdraw(Account *acc) {
    float amt;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amt);
    if (amt > acc->balance) printf("Insufficient funds!");
    else {
        acc->balance -= amt;
        printf("Withdrawal successful!");
    }
}

void saveData(Account acc) {
    FILE *file = fopen("bank.dat", "wb");
    if (file) {
        fwrite(&acc, sizeof(Account), 1, file);
        fclose(file);
    }
}