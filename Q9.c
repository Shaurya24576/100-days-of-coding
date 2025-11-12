//Q9:Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main() 
{
    int principal, rate, time;
    int simpleInterest;
    double compoundInterest, amount;
    printf("Enter Principal amount: ");
    scanf("%d", &principal);
    printf("Enter Rate of interest (in %%): ");
    scanf("%d", &rate);
    printf("Enter Time (in years): ");
    scanf("%d", &time);
    simpleInterest = (principal * rate * time) / 100;
    amount = principal * pow((1 + (double)rate / 100), time);
    compoundInterest = amount - principal;
    printf("\nSimple Interest = %d", simpleInterest);
    printf("\nCompound Interest = %.2lf\n", compoundInterest);
    return 0;
}
