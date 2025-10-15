#include <stdio.h>

int main() {

    // Least Common Multiple OR Prime Factorization
    // int num, div, counter=2;

    // while(counter <= 100) {
    //     num = counter;
    //     div = 2;
    //     printf("%d : ", num);

    //     while(num != 1) {
    //         if(num % div == 0) {
    //             num /= div;
    //             printf("%d ", div);
    //         }
    //         else {
    //             div++;
    //         }
    //     }
    //     puts("");
    //     counter++;
    // }

    // HCF

    // int result, a = 2, b = 28;

    // while (result > 0) {
    //     if(a % result == 0 && b % result == 0) {
    //         break;
    //     }

    //     result--;
    // }

    //  printf("HCF of %d and %d is: %d\n", a, b, result);


    int num1, num2, div, hcf, counter = 2;

    printf("Prime Factorization With HCF\n");

    while(counter < 100) {
        num1 = counter;
        num2 = counter + 2;
        div = 2;
        hcf = 1;

        printf("\n%d and %d : ", num1, num2);

        while (num1 != 1 || num2 != 1){
            if(num1 % div == 0 && num2 % div == 0) {
                hcf *= div;
                num1 /= div;
                num2 /= div;
                printf("%d ", div);
            }
            else if (num1 % div == 0) {
                num1 /= div;
            }
            else if (num2 % div == 0) {
                num2 /= div;
            }
            else {
                div++;
            }
        }

        counter++;

    }


}