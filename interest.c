#include "stdio.h"
#include "math.h"

// Function to calculate simple interest
void interest(float principal, float rate, int time) {
    float interest = (principal * rate * time) / 100;
    printf("The interest is: %.2f\n", interest);
}

// Function to calculate compound interest
void compound_interest(float principal, float rate, int time) {
    float amount = principal * pow((1 + rate / 100), time);
    float interest = amount - principal;
    printf("The compound interest is: %.2f\n", interest);
}

// main entry point of the program
int main() {
    int choice;
    float principal, rate;
    int time;

    printf("Choose the type of interest calculation:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice from the above options: ");
    scanf(" %d", &choice);

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%d", &time);

    switch (choice) {
        case 1:
            interest(principal, rate, time);
            break;
        case 2:
            compound_interest(principal, rate, time);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
return 0;
}
