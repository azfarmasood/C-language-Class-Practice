#include <stdio.h>

int main()
{
    /*
    EXP 5: Questions:
    =============================
    Questions have already done
    =============================

    Q1 Write a program for calculating the percentage and grade of a student by
    taking input of 5 subjects marks (100 marks each course max).
     Less than 55 = fail
     55 to 65 = C+
     65 to 75 = B
     75 to 85 = B+
     85 to 95 = A
     95 to 100 = A+


    Q2 Write a program to make a calculator where the operator selection is
    dependent upon user input. Following are the requirements.

     two inputs numeric
     one selection for operation
     output with respect to user selection
     When selecting division operator handle ‘0’ in denominator.
     Operators (+,-,*,/)


    Q3 Write a program to find whether the number entered by user is even or odd.

    Q4 Write a program to check whether the number entered by the user is
    positive or negative.

    Q5 Write a program to print “good morning” if time is less than 12 else print
    “good after noon”
    */


    /*Q6  Write a program to print “You can vote” if the voter’s age is 18 or above,
    otherwise print “You are not eligible”*/

    // int age;

    // printf("Enter Your age: ");

    // if(scanf("%d", &age) != 1) printf("Invalid Input Character Please Enter A Valid Input Integer or Number");


    // if(age > 0 && age <= 60) {
    //     if (age >= 18) {
    //         puts("You can vote");
    //     }
    //     else {
    //         puts("You are not Eligible");
    //     }
    // }
    // else {
    //     puts("Please Enter The Valid Age Between (1-60)");
    // }


    /*Q7 What is Ternary operator? Why we use them?*/

    int a, b;

    printf("Enter Your A Number: ");

    scanf("%d", &a);

    printf("Enter Your B Number: ");
    scanf("%d", &b);

    a > b ? printf("a is greater then b %d", a) : printf("b is greater then a %d", b);

}