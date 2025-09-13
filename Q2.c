#include <stdio.h>
 int main () {

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
   printf("Sum: %d, ", a+b);
   printf("Diff: %d, ", a-b);
   printf("Prod: %d, ", a*b);
   b != 0 ? printf("Quotient: %d, ", a/b) : printf("Quotient: Undefined (division by zero), ");

 }