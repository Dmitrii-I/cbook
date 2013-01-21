#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter an amount: ");
    scanf("%d", &amount);

    printf("$20 bills: %d\n", amount / 20);
    /* Subtract the amount paid in $20 bills to get new amount */
    amount = amount - (amount / 20 * 20);

    printf("$10 bills: %d\n", amount / 10);
    /* Subtract the amount paid in $10 bills to get new amount */
    amount = amount - (amount / 10 * 10);

    printf("$5 bills: %d\n", amount / 5);
    /* Subtract the amount paid in $5 bills to get new amount */
    amount = amount - (amount / 5 * 5);
    
    /* An amount is left which can be paid in $1 bills only */
    printf("$1 bills: %d\n", amount); 

    return 0;
}

