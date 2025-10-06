#include <stdio.h>


int main () {
    float pi = 3.14;
    float radious, area, circumeference;

    printf("Enter The Radious Of The Circle: ");
    scanf("%f", &radious);

    // printf("%.2f", radious);

    area = pi * radious * radious;

    printf("Value area of the circle = %.2f\n", area);

    circumeference = 2 * pi * radious;

    printf("Value of Circume Ference = %.2f", circumeference);

}