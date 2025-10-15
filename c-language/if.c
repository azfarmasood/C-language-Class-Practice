#include <stdio.h>

int main() {
    int num, div, counter = 2;

    while(counter <= 100) {
        num = counter;
        div = 2;
        printf("%d : ", num);

        while(num != 1) {
            if(num % div == 0) {
                num /= div;

                printf("%d ", div);
            }
            else {
                div++;
            }
        }
        puts("");
        counter++;
    }
}