// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {

    int l,b, Area, Perimeter;
    
    printf("Enter l and b: ");
    scanf("%d%d", &l,&b);
    printf("Area: %d, ", l*b);
    printf("Perimeter: %d", 2*(l+b));
    return 0;
}