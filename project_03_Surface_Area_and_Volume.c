#include <stdio.h>


int main () {
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


    float length, width, height, volume, surface_area;

    printf("Enter The Value of Length: ");

    scanf("%f", &length);

    printf("Enter The Value of Width: ");

    scanf("%f", &width);

    printf("Enter The Value of Height: ");

    scanf("%f", &height);

    volume = length * height * width;

    
    surface_area = 2 * (height * width) + (height * length) + (width * length);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f", surface_area);
}