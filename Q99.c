// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;

    char months[][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date in format dd/mm/yyyy: ");
    gets(date);  // use fgets() for safer input

    // Extract day, month, and year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Validate month
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    // Print formatted date
    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
