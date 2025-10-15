// This one uses boolean style for understanding bool type in C
#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    printf("Enter Your Integer: ");

    if(scanf("%d", &number) != true ) {
        printf("Invalid Character You Enterd");
        return true; // sending message to OS this 1 which means error
    }

    printf("Enter Your Integer2: ");

    int number2;

    if(scanf("%d", &number2) != true ) {
        printf("Invalid Character You Enterd");
        return true; // sending message to OS this 1 which means error
    }

    return false;
}