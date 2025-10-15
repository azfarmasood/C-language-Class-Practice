#include <stdio.h>
#include <time.h>

int main() {
    time_t getTime;

    // printf("Get Time %d", getTime);

    struct tm * getCurrentTime;

    // printf("%p", getCurrentTime);


    time(&getTime);

    // printf("Get Time %d", getTime);

    getCurrentTime = localtime(&getTime);

    // printf("Get Current Time %d", getCurrentTime->tm_hour);

    int minutes = getCurrentTime -> tm_min;
    int hour = getCurrentTime -> tm_hour;

    if (hour >= 5 && hour < 12) {
        printf("Good Morning");
    }
    else if (hour >= 12 && hour <= 16 || hour == 16 && minutes <= 30) {
        printf("Good After Noon");
    }
    else if (hour >= 16 && hour <= 18) {
        puts("Good Evening!");
    }


    // time_t getTime;
    // struct tm *getCurrentTime;

    // time(&getTime);
    // getCurrentTime = localtime(&getTime);

    // char buffer[80];
    // // Format the date and time string using ISO 8601 format specifiers
    // // %F expands to %Y-%m-%d
    // // %T expands to %H:%M:%S
    // strftime(buffer, sizeof(buffer), "%F %T", getCurrentTime);

    // printf("ISO 8601 Time: %s\n", buffer);
}