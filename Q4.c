#include <stdio.h>
 int main () {

    float r, Area, Circumference;
    printf("Enter radius: ");
    scanf("%f", &r);
    Area = 3.14f * r * r;
    Circumference = 2 * 3.14f * r;
    printf("Area: %.2f, ", Area);
    printf("Circumference: %.2f", Circumference);
    return 0;
}