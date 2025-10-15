// boolean condition used 0 and 1 format

#include <stdio.h>

int main() {
    int number;
    printf("Enter Your Integer: ");

    if(scanf("%d", &number) != 1 ) {
        printf("Invalid Character You Enterd");
        return 1; // sending message to OS this 1 which means error
    }

    printf("Enter Your Integer2: ");

    int number2;

    if(scanf("%d", &number2) != 1 ) {
        printf("Invalid Character You Enterd");
        return 1; // sending message to OS this 1 which means error
    }

    return 0; // This one sending for Success Message to Your OS.
}