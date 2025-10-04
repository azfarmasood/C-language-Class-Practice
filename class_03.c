#include <stdio.h>

// addtion, subtraction multiplication, division, modulus


int main() {
    int number1, number2; // 1+1 = 2
    char oprations; // 1+1 = 11
    

    printf("Enter Your First Number: ");
    
    if(scanf("%d\n", &number1) != 1 ){ // ismain hum input lai rhai hain  user sai number1 jo kai integer main jarha hai for example value di hum nai 1, 2, 4, 6
        printf("Invalid Characters!\n");
        return 1; // this return is defined for sending message for OS means Oprating System if your value is incorrect the program will stop here if you not add the return key word it will not stop your program it will continue to execute;
    }
    printf("Enter Your Second Number: ");
    
    if(scanf("%d\n", &number2) != 1) {
        printf("Invalid Character For Second Number!\n");
        return 1; // this return is defined for sending message for OS means Oprating System if your value is incorrect the program will stop here if you not add the return key word it will not stop your program it will continue to execute;
    }



    // ismain hum input lai rhai hain  user sai number1 jo kai integer main jarha hai for example value di hum nai 1, 2, 4, 6

    printf("Enter Your Operations (+, -, *, /): ");
    scanf(" %c", &oprations); // ismain hum input lai rhai hain  user sai oprations jo kai character base hai like for example +, -, *, /;

    //1. ARTHMETIC OPRATORS:
    // +, -, *, /, %, //;

    //2. ASSIGNMENT OPRATORS:
    // +=, -=, /=, *=;

    //3. Comparasion OPRATORS:
    // ==, !=, >, <, >=, <=;

    //4. LOGICAL OPERATORS:
    // && ||

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
                
                printf("%d\n", number1 / number2);
            }
            else {
                printf("%.2f", (float) number1 / number2);
            }
        }

        // int number = 24;
        // printf("%d\n", number);

        // printf("%.2f\n", number);



    // char data[] = "+923456789";

    // printf("%s", data);


    // int number1 = 1, number2 = 2;

    // printf("%d\n", number1 - number2);

    // number1 -=2;

    // printf("%d", number1);
}