#include <stdio.h>
#include <ctype.h>


int add(int number1, int number2) {
    int result = number1 + number2;
    return result;
}


int sub(int number1, int number2) {
    int result = number1 - number2;
    return result;
}


int multi(int number1, int number2) {
    int result = number1 * number2;
    return result;
}


int div(int number1, int number2) {
    int result = number1 / number2;
    return result;
}

int main() {
    int number1, number2, operation;
    char choice[10];

    do {

    printf("Enter First Number: ");
    
    if(scanf("%d", &number1) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        while(getchar() != '\n');
        continue;
    };
    
    printf("Enter Second Number: ");

    if(scanf("%d", &number2) != 1){
        printf("Invalid input. Please enter a valid integer.\n");
        while(getchar() != '\n');
        continue;
    }

    printf("Enter operation (1. +, 2. -, 3. *, 4. /): ");

    if(scanf(" %d", &operation) != 1) {
        printf("Invalid input. Please enter a valid operation.\n");
        while(getchar() != '\n');
        continue;
    }

    if (operation == '1') {
        int result = add(number1, number2);
        printf("Result: %d\n", result);
    }
    else if (operation == '2') {
        int result = sub(number1, number2);
        printf("Your Subtraction Result is: %d\n", result);
    }
    else if (operation == '3') {
        int result = multi(number1, number2);
        printf("Your Multiply Result is: %d\n", result);
    }
    else if (operation == '4') {
        int result = div(number1, number2);
        printf("Your Division Result is: %d\n", result);
    }

    printf("Do you want to perform another calculation? (y/n): ");
    scanf(" %s", &choice);


} while (toupper(choice[0]) == 'Y' );

}