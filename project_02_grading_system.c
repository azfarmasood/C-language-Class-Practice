#include <stdio.h>




int main () {
    int grade;

    printf("Enter your grades: ");

    scanf("%d", &grade);

//    char grade_a_plus[10] = "Grade A+";
//    char grade_a[10] = "Grade A";


    if (grade >= 0 && grade <= 100) {

        if(grade > 89 && grade <= 100) {
            // printf("%s\n", grade_a_plus);
            // puts(grade_a_plus);
            puts("Grade A+");
        }
        else if (grade > 79 && grade <= 89) {
            // puts(grade_a);
            puts("Grade A");
        }
        else if (grade > 69 && grade <= 79) {
            puts("Grade B+");
        }
        else if (grade > 59 && grade <= 69) {
            puts("Grade B");
        }
        else if (grade > 49 && grade <= 59) {
            puts("Grade C+");
        }
        else if (grade >= 0 && grade <= 49) {
            puts("Fail!");
        }
    }
    else {
        puts("Invalid Value Please Select a Vaild Value");
    }

}