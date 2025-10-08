#include <stdio.h>

struct Account {
    int accNo;
    float balance;
};

int main() {
    struct Account a = {101, 1000.0};
    int choice;
    float amt;

    printf("1.Deposit\n2.Withdraw\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amt);
        a.balance += amt;
    }
    else if(choice == 2) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amt);
        if(amt <= a.balance) a.balance -= amt;
        else printf("Insufficient balance!\n");
    }

    printf("Account No: %d\nBalance: %.2f\n", a.accNo, a.balance);
    return 0;
}
