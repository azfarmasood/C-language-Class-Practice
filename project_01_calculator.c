#include <stdio.h>
#include <ctype.h>

int main() {
    int number1, number2;
    char oprations;
    char choice[10];
    
    do {
        printf("Enter Your First Number: ");
        
        if(scanf("%d", &number1) != 1){
            printf("Invalid Characters!\n");
            return 1; 
        }
    
        printf("Enter Your Second Number: ");
        
        if(scanf("%d", &number2) != 1) {
            printf("Invalid Character For Second Number!\n");
            return 1; 
        }
    
    
    
        printf("Enter Your Operations (+, -, *, /): ");
        scanf(" %c", &oprations); 
    
            if (oprations == '+') {
                int sum = number1 + number2;
                printf("Your Addition Result is: %d\n", sum);
            }
            else if(oprations == '-') {
                int sub = number1 - number2;
        
                printf("Your Sub Result is: %d\n", sub);
            }
            else if (oprations == '*') {
                int multiply = number1 * number2;
    
                printf("Your Multiplication Result is: %d\n", multiply);
            }
            else if (oprations == '/'){
                if (number1 % number2 == 0) {
                    
                    printf("%d\n", number1 / number2);
                }
                else {
                    printf("%.2f\n", (float) number1 / number2);
                }
            }

            printf("Would you like to continue this program again? (Yes/No) ");
            scanf("%s", &choice);



    } while (tolower(choice[0]) == 'y');

}