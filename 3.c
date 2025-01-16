#include<stdio.h>
#include<string.h>

// Struct for Bank Management System
typedef struct BankMgmt
{
    int AccNumber;
    char CustName[25];
    int AvlBalance;
    char AccType[10];
} BankMgmt;

int main()
{
    BankMgmt Cust1; // For customer 1

    // Enter details of customer
    printf("Enter Account Number: ");
    scanf("%d", &Cust1.AccNumber);

    // Clear the input buffer
    fflush(stdin);

    printf("Enter Customer Name: ");
    fgets(Cust1.CustName, sizeof(Cust1.CustName), stdin);
    Cust1.CustName[strcspn(Cust1.CustName, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Available Balance: ");
    scanf("%d", &Cust1.AvlBalance);

    if (Cust1.AvlBalance < 0)
    {
        printf("Balance cannot be negative!!\n");
        return 1;
    }

    fflush(stdin);

    printf("Enter Account Type: ");
    fgets(Cust1.AccType, sizeof(Cust1.AccType), stdin);
    Cust1.AccType[strcspn(Cust1.AccType, "\n")] = '\0'; // Remove trailing newline

    int ch = 0;
    int with;
    int depo;

    while (ch != 4)
    {
        printf("\n*******************************************************\n");
        printf("1. Withdraw\n2. Deposit\n3. Display Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("Enter amount to withdraw: ");
            scanf("%d", &with);

            if (with > Cust1.AvlBalance)
            {
                printf("Insufficient balance\n");
            }
            else
            {
                Cust1.AvlBalance -= with;
                printf("Updated Balance is: %d\n", Cust1.AvlBalance);
            }
        }
        else if (ch == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%d", &depo);

            if (depo < 0)
            {
                printf("Deposit amount cannot be negative!!\n");
            }
            else
            {
                Cust1.AvlBalance += depo;
                printf("Updated Balance is: %d\n", Cust1.AvlBalance);
            }
        }
        else if (ch == 3)
        {
            printf("Available Balance is: %d\n", Cust1.AvlBalance);
        }
        else if (ch == 4)
        {
            printf("Thanks for using this service!\n");
            printf("\n*******************************************************\n");
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
