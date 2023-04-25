#include <stdio.h>

int main() {
    printf("Calculator\n");

    while(1) {
        float num1, num2, result;
        char opr[1], yn[1];

        printf("Enter Number 1: ");
        scanf("%f", &num1);

        printf("Enter Number 2: ");
        scanf("%f", &num2);

        printf("\nEnter operation to be performed;\nA - Addition\nS - Subraction\nM - Multiplication\nD - Divison\nOperation: ");
        scanf("%s", &opr[0]);

        if(opr[0] == 'A') {
            result = num1 + num2;
        } else if(opr[0] == 'S') {
            result = num1 - num2;
        } else if(opr[0] == 'M') {
            result = num1 * num2;
        } else if(opr[0] == 'D') {
            result = num1 / num2;
        } else {
            printf("Undefined Operation\n");
        };

        printf("Result: %f\n\n", result);

        printf("Do you want to continue? (Y/N): ");
        scanf("%s", &yn[0]);
        printf("\n");

        if(yn[0] == 'N' || yn[0] == 'n') {
            break;
        };
    };

    return 0;
}
