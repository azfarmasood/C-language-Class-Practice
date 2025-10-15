#include <stdio.h>

int main()
{
    // ==================================
    // Payramids
    // ==================================

    int number1 = 5, row1 = 0;
    // int number2 = 0, row2 = 5;

    // ==================================
    // Right Paramyd
    // ==================================

    // for(row1; row1 <= number1; row1++) {
    //     // printf("* ");

    //     for(int column = 0; column <= row1; column++) {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // ==================================
    // Invert Right Paramyd:
    // ==================================

    // for (row; row >= number; row--)
    // {
    //     // printf("* ");

    //     for (int column = 0; column <= row; column++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // ==================================
    // Left Payramid:
    // ==================================

    // for(number2; number2 <= row2; number2++) {
    //     for(int column = 0; column <= 2 * (row2 - number2) - 1; column++ ){
    //         printf(" ");
    //     }

    //     for(int left_payramid = 0; left_payramid <= number2; left_payramid++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // ==================================
    // Triangle:
    // ==================================


    for(row1; row1 <= number1; row1++) {
        for(int column = 0; column <= number1 - row1; column++) {
            printf(" ");
        }

        for(int left_paramyd = 0; left_paramyd <= row1; left_paramyd++) {
            printf("* ");
        }
        printf("\n");
    }
}