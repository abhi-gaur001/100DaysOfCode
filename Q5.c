#include<stdio.h>
int main() {
    float c;
    int f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (int)((c * 9.0 / 5.0) + 32.0);
    printf("Temperature in Fahrenheit: %d\n", f);
    return 0;
}
