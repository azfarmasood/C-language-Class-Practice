#include <stdio.h>
#include <time.h>

int main () {
    time_t currentTime;

    struct tm localTime;

    time (&currentTime);

    localtime_s(&localTime, &currentTime);

    int minutes = localTime.tm_min;
    int hour = localTime.tm_hour;
    
    printf("%d\n", hour);

    if (hour >= 5 && hour < 12) {
        printf("good morning");
    }
    else if (hour >= 12 && hour == 4 && minutes == 30) {
        printf("Good After noon");
    }
}