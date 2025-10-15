#include <stdio.h>

int main(void) {
    int hour, minute;
    
    printf("Enter time (hour 0-23): ");
    scanf("%d", &hour);
    
    printf("Enter time (minute 0-59): ");
    scanf("%d", &minute);
    
    if (hour >= 5 && hour < 12) {
        printf("good morning\n");
    }
    else if (hour >= 12 && hour < 16 || hour == 16 && minute == 30) {
        printf("good afternoon\n");
    }
}