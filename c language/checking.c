#include <stdio.h>
// #include <stdbool.h>

int main() {
    // bool isProgrammingISFun = true;

    // printf("%d Yes Programming is Fun:", isProgrammingISFun);

    int table, number;

    printf("Enter Starting Table: ");
    scanf("%d", &table);

    printf("Enter Starting Number (1-12): ");
    scanf("%d", &number);

    while (table <= 12) {
        printf("\nA new table has started %d\n", table);

        while (number <= 12) {
            printf("%d X %2d = %3d\n", table, number, table * number);
            number++;
        }

        table++;
        number = 1;
    }


}