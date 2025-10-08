#include <stdio.h>


int main () {
    
    // char name[50][100] = {
    //     "Azfar", // 0
    //     "Ali",   // 1
    //     "Abdullah", // 2
    // };

    // step1    Step2               step3
    // declare variable // Conditinial Logic increment/decrement // first time loop run 0 print 2. 0 + 1 = 1 thrid time 1 + 1 = 2

    // for (int number = 0; number <= 15; number++) { 
    //     // printf("%d\n", number);
    //     if (number >= 10) {
    //         printf("%d\n", number);
    //     }
        
    // }


    // 2d Table;

    int table, number, range;

    printf("Enter Your any table: ");

    scanf("%d", &table);

    printf("Enter Your table value between (1 - 100): ");
    scanf("%d", &range);



    for(table; table <= range; table++) {
        printf("A new Table has genrated: %d\n", table);

        number = 1;

        for(number; number <= 12; number++) { // 2 x 1 -> number = 2
                //  2  x  2 = 4
            printf("%d x %d = %d\n", table,number, table * number);
        }
    }



    return 0;
}