#include <stdio.h>

int main () {
    // int table, number;

    // printf("Enter Your any table: ");
    // scanf("%d", &table);

    // for(table; table <= 100; table++) {
    //     printf("A New Table has been genrated %d\n", table);

    //     for(number = 1; number <= 12; number++) {
    //         printf("%d x %d = %d\n", table, number, table * number);
    //     }
    // }

    // OR

    // while (table <= 10) {
    //     printf("A New Table Has Been Genrated %d\n", table);
    //     number = 1;
    //     while(number <= 12) {
    //         printf("%d x %d = %d\n", table, number, table * number);
    //         number++;
    //     }
    //     table++;
    // }

//     for(table; table <= 100; table += 1) {
//         printf("\n=== Tables %d to %d ===\n", table, table + 9);

//          for (number = 1; number <= 10; number++) {
//             for (int t = table; t < table + 10; t++) {
//                 printf("%2d x %2d = %3d\t", t, number, t * number);
//             }
//             printf("\n");
//     }
// }

    int table, number;
    int rows;

    printf("Enter starting table: ");
    scanf("%d", &table);

    for (table; table <= 100; table += 10) {
        printf("\n===== Tables %d to %d =====\n\n", table, table + 9);

        for (number = 1; number <= 12; number++) {
            for (rows = table; rows < table + 10 && rows <= 100; rows++) { 
                printf("%2d x %2d = %3d\t", rows, number, rows * number);
            }
            printf("\n");
        }
    }
}