// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    int costPrice, sellingPrice;
    int amount;
    float percentage;
    printf("Enter Cost Price: ");
    scanf("%d", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%d", &sellingPrice);
    if (sellingPrice > costPrice) 
    {
        amount = sellingPrice - costPrice;
        percentage = (amount * 100.0) / costPrice;
        printf("Profit = %d\n", amount);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (costPrice > sellingPrice)
     {
        amount = costPrice - sellingPrice;
        percentage = (amount * 100.0) / costPrice;
        printf("Loss = %d\n", amount);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else
     {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
