#include <stdio.h>

// addtion, subtraction multiplication, division, modulus


int main() {
    int number1, number2;
    char oprations;

    printf("Enter Your First Number: ");
    scanf("%d", &number1);

    printf("Enter Your Second Number: ");
    scanf("%d", &number2);

    printf("Enter Your Operations (+, -, *, /): ");
    scanf(" %c", &oprations);

    //1. ARTHMETIC OPRATORS:
    // +, -, *, /, %, //;

    //2. ASSIGNMENT OPRATORS:
    // +=, -=, /=, *=;

    //3. Comparasion OPRATORS:
    // ==, !=, >, <, >=, <=;

    //4. LOGICAL OPERATORS:
    

    // Conditional Logic ya Decision making.

        if (oprations == '+') {
            int sum = number1 + number2;
            printf("Your Addition Result is: %d", sum);
        }
        else if(oprations == '-') {
            int sub = number1 - number2;
    
            printf("Your Sub Result is: %d", sub);
        }
        else if (oprations == '*') {
            int multiply = number1 * number2;

            printf("Your Multiplication Result is: %d", multiply);
        }
        else if (oprations == '/'){
        if (number1 % number2 == 0) {
            // This will be print for non decimal vlaues
            int div = number1 / number2;
            printf("Result: %d\n", div);
        } else {
            // This will be print with decimal values
            float div = (float)number1 / number2;
            printf("Result: %.2f\n", div);
        }
    }
    // char data[] = "+923456789";

    // printf("%s", data);
}