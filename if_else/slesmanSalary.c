
// This program calculates the gross salary of a salesman based on the sales amount and a given salary structure.
// It considers basic salary, dearness allowance (DA), bonus, and commission according to the sales amount.

#include <stdio.h>

int main() {
    float basic = 10000; // Basic salary
    float da = 0.645 * basic; // Dearness Allowance (64.5% of basic salary)
    float sales; // Sales amount
    float bonus, commission, gross; // Bonus, Commission, and Gross salary
    char name[30]; // Name of the salesman

    // Input salesman name
    printf("Enter your name: ");
    scanf("%s", name); // %s is used for strings

    // Input sales amount
    printf("Enter your sales amount: ");
    scanf("%f", &sales);

    // Calculate bonus and commission based on sales amount
    if (sales >= 100000) {
        bonus = 10000;
        commission = 0.10 * sales; // 10% commission
    } else {
        bonus = 2000;
        commission = 0.05 * sales; // 5% commission
    }

    // Calculate gross salary
    gross = basic + da + bonus + commission;

    // Output the result
    printf("\nName: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("Bonus: %.2f\n", bonus);
    printf("Commission: %.2f\n", commission);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}
