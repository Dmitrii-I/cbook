#include <stdio.h>

int main(void)
{ 
    int item_number, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    /* %.2d instead of %d ensures that months and days have leading zero if needed */
    printf("%d\t$ %.2f\t%.2d/%.2d/%d\n", item_number, price, month, day, year);

    return 0;
}
    
