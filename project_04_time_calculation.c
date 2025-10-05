#include <stdio.h>
#include <time.h>


int main () {
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