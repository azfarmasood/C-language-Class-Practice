#include <stdio.h>

int main() {
    int table, number;

    printf("Enter Your Table: ");
    scanf("%d", &table);

    while (table <= 10) {
        
        printf("Starting New Table: %d\n", table);
        puts("");
        printf("Enter Your Number: %d\n", number);
        scanf("%d", &number);

        while (number <= 10) {
            printf("%d x %2d = %3d\n", table, number, table * number);
            number = number + 1;
        }

        puts("\n");

        table = table + 1;
    }

}