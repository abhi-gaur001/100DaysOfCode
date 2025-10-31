//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int index = 0;

    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main(void) {
    int num;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printBinary(num);
    printf("\n");
    return 0;
}