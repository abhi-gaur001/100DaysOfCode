//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int number;
    int digitCount[10] = {0}; // Array to store count of each digit (0-9)

    printf("Enter an integer number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Count occurrences of each digit
    if (number == 0) {
        digitCount[0]++;
    } else {
        while (number > 0) {
            int digit = number % 10;
            digitCount[digit]++;
            number /= 10;
        }
    }

    // Find the digit with the maximum count
    int maxCount = 0;
    int mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}