#include <stdio.h>

int main()
{
    // int a = 2, b = 4, c = 6;
    // printf("Before Swaping The Values: \na = %d\n, b = %d\n, c = %d\n", a, b, c);

    // a = a ^ b;
    // b = a ^ b;
    // c = a ^ b;

    // printf("After Swaping The Values: \na = %d\n, b = %d\n, c = %d\n", a, b, c);

    //         int a = 2, b = 4, c = 6;
    //         printf("Before Swaping The Values: \na = %d\n, b = %d\n, c = %d\n", a, b, c);

    //         a = b;
    //         b = c;
    //         c = a;

    //         printf("After Swaping The Values: \na = %d\n, b = %d\n, c = %d\n", a, b, c);

    /*
    Write a program to find unit , ten , hundred , and thousand values in a four digit number
    Example
    Number = 1234
    Unit = 4
    Ten = 3
    Hundred = 2
    Thousand = 1
    */

    // int number = 1234, unit, ten, hundred, thousand = 1;

    // unit = number % 10;
    // ten = (number / 10) % 10;

    // printf("Number of Unit = %d\n", unit);
    // printf("Number of ten = %d\n", ten);


    char character;

    int hour;

    printf("Enter Your Character between (0-9): ");
    scanf("%c", &character);

    // printf("%d", character);

    hour = character - '0';

    // printf("%d\n", hour);

    if(hour >= 0 && hour <= 11) {
        printf("Good Morning its %d AM", hour);
    }
    else if(hour >= 12 && hour <= 15) {
        printf("Good After Noon its %d PM", hour);
    }
}