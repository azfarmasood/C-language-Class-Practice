#include <stdio.h>




int main () {
//     int grade;

//     printf("Enter your grades: ");

//     scanf("%d", &grade);

// //    char grade_a_plus[10] = "Grade A+";
// //    char grade_a[10] = "Grade A";


//     if (grade >= 0 && grade <= 100) {

//         if(grade > 89 && grade <= 100) {
//             // printf("%s\n", grade_a_plus);
//             // puts(grade_a_plus);
//             puts("Grade A+");
//         }
//         else if (grade > 79 && grade <= 89) {
//             // puts(grade_a);
//             puts("Grade A");
//         }
//         else if (grade > 69 && grade <= 79) {
//             puts("Grade B+");
//         }
//         else if (grade > 59 && grade <= 69) {
//             puts("Grade B");
//         }
//         else if (grade > 49 && grade <= 59) {
//             puts("Grade C+");
//         }
//         else if (grade >= 0 && grade <= 49) {
//             puts("Fail!");
//         }
//     }
//     else {
//         puts("Invalid Value Please Select a Vaild Value");
//     }



/*

    Q6

    Psuedo Code:

    BEGIN
       DECLARE length, width, and height, surfacearea
       INPUT Take input from the user as Integer
       DECLARE Result = length * width * height
       DECLARE surface_area = 2 *(h x w) + (h x l) + (w x l)
       PRINT "Volume", vloume.
       PRINT "SURFACE", surface.
    END
*/


    // float length, width, height, volume, surface_area;

    // printf("Enter The Value of Length: ");

    // scanf("%f", &length);

    // printf("Enter The Value of Width: ");

    // scanf("%f", &width);

    // printf("Enter The Value of Height: ");

    // scanf("%f", &height);

    // volume = length * height * width;

    
    // surface_area = 2 * (height * width) + (height * length) + (width * length);
    
    // printf("Volume: %.2f\n", volume);
    // printf("Surface Area: %.2f", surface_area);

    // printf("6. Write a program to print “good morning” if time is less than 12 else print “good after noon”\n");

    int hour, minute;

    printf("Enter Your Time between (1-23): ");
    scanf("%d", &hour);

    printf("Enter Your Minutes between (1-60): ");

    scanf("%d", &minute);


    if(hour > 4 && hour <= 11 || hour >= 12 && hour <=15) {
        // puts("Good Morning ");
      if(hour > 4 && hour <= 11) {
        printf("Good Morning!");
      }
      else {
        printf("Good Afternoon!");
      }
    }
    // else if(hour >= 12 && hour < 15) {
    //     printf("Good Afternoon! its: %d:%d PM", hour, minute);
    // }


    return 0;
    

}