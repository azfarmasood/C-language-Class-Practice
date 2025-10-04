#include <stdio.h>


int main() {
    int number1, number2;
    char oprations;
    

    printf("Enter Your First Number: ");
    
    if(scanf("%d\n", &number1) != 1 ){

        printf("Invalid Characters!\n");
        return 0; 
    }
    printf("Enter Your Second Number: ");
    
    if(scanf("%d\n", &number2) != 1) {
        printf("Invalid Character For Second Number!\n");
        return 0; 
    }


    printf("Enter Your Operations (+, -, *, /): ");
    scanf(" %c", &oprations); 

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
}