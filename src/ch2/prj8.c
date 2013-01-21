#include <stdio.h>

int main(void) {
    float loan_amount, interest_rate, monthly_payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    /* Remaining balance before any payments */
    balance = loan_amount;
    /* Adjust the interest rate from yearly to monthly */
    interest_rate = interest_rate / 100 / 12;

    balance = balance * (1 + interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n", balance);
    
    balance = balance * (1 + interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", balance);
    
    balance = balance * (1 + interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}

