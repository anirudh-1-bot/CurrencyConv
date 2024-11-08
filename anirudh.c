#include <stdio.h>

void displayMenu() {
    printf("\nCurrency Converter\n");
    printf("-------------------\n");
    printf("1. USD to EUR\n");
    printf("2. USD to GBP\n");
    printf("3. USD to INR\n");
    printf("4. EUR to USD\n");
    printf("5. EUR to GBP\n");
    printf("6. EUR to INR\n");
    printf("7. GBP to USD\n");
    printf("8. GBP to EUR\n");
    printf("9. GBP to INR\n");
    printf("10. INR to USD\n");
    printf("11. INR to EUR\n");
    printf("12. INR to GBP\n");
    printf("13. Exit\n");
}

float convertCurrency(float amount, float exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    int choice;
    float amount, result;
    
    // Exchange rates for conversions (example rates)
    // These exchange rates are hypothetical and can be updated as per the current market.
    float usdToEur = 0.93;
    float usdToGbp = 0.82;
    float usdToInr = 83.5;
    float eurToUsd = 1.075;
    float eurToGbp = 0.88;
    float eurToInr = 89.7;
    float gbpToUsd = 1.22;
    float gbpToEur = 1.14;
    float gbpToInr = 109.7;
    float inrToUsd = 0.012;
    float inrToEur = 0.011;
    float inrToGbp = 0.0091;

    while (1) {
        displayMenu();
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 13) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter the amount to convert: ");
        scanf("%f", &amount);

        switch (choice) {
            case 1:
                result = convertCurrency(amount, usdToEur);
                printf("%.2f USD is equal to %.2f EUR\n", amount, result);
                break;
            case 2:
                result = convertCurrency(amount, usdToGbp);
                printf("%.2f USD is equal to %.2f GBP\n", amount, result);
                break;
            case 3:
                result = convertCurrency(amount, usdToInr);
                printf("%.2f USD is equal to %.2f INR\n", amount, result);
                break;
            case 4:
                result = convertCurrency(amount, eurToUsd);
                printf("%.2f EUR is equal to %.2f USD\n", amount, result);
                break;
            case 5:
                result = convertCurrency(amount, eurToGbp);
                printf("%.2f EUR is equal to %.2f GBP\n", amount, result);
                break;
            case 6:
                result = convertCurrency(amount, eurToInr);
                printf("%.2f EUR is equal to %.2f INR\n", amount, result);
                break;
            case 7:
                result = convertCurrency(amount, gbpToUsd);
                printf("%.2f GBP is equal to %.2f USD\n", amount, result);
                break;
            case 8:
                result = convertCurrency(amount, gbpToEur);
                printf("%.2f GBP is equal to %.2f EUR\n", amount, result);
                break;
            case 9:
                result = convertCurrency(amount, gbpToInr);
                printf("%.2f GBP is equal to %.2f INR\n", amount, result);
                break;
            case 10:
                result = convertCurrency(amount, inrToUsd);
                printf("%.2f INR is equal to %.2f USD\n", amount, result);
                break;
            case 11:
                result = convertCurrency(amount, inrToEur);
                printf("%.2f INR is equal to %.2f EUR\n", amount, result);
                break;
            case 12:
                result = convertCurrency(amount, inrToGbp);
                printf("%.2f INR is equal to %.2f GBP\n", amount, result);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
