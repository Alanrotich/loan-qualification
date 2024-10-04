
#include <stdio.h>

int main() {
    int age;
    double annualIncome;

    // Prompt the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt the user for their annual income
    printf("Enter your annual income (in sh): ");
    scanf("%lf", &annualIncome);

    // Check loan eligibility
    if (age >= 21 && annualIncome >= 21000) {
        printf("Congratulations, you qualify for the loan!\n");
    } else {
        printf("Unfortunately, you are not eligible for a loan.\n");
        if (age < 21) {
            printf("Reason: You must be at least 21 years old.\n");
        }
        if (annualIncome < 21000) {
            printf("Reason: Your annual income must be at least sh21,000.\n");
        }
    }

    return 0;
}
