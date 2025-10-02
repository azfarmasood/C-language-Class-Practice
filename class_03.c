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

    //1. ASSIGNMENT OPRATORS:
    // +, -, *, /, %, //;

    //2. Comparasion OPRATORS:
    // ==, !=, >, <, >=, <=;

    // 3. LOGICAL OPERATORS:
    

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
           int div = number1 / number2;

           printf("%d", div);
        }

        // char data[] = "+923456789";

        // printf("%s", data);





}