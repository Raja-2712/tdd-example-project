#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void add(char *str) {
    char temp[20];  // Buffer to store digits from input
    int temp_index = 0;  // Index to track position in the temp array
    int sum = 0, value = 0;

    // Loop through the string and accumulate digits in temp[]
    while (*str) {
        if (isdigit(*str)) {
            temp[temp_index++] = *str;  // Store digit in temp
        }
        str++;
    }
    
    // Null-terminate the string of digits
    temp[temp_index] = '\0';

    // Convert the string of digits to an integer
    value = atoi(temp);
    printf("Value: %d\n", value);

    // Calculate the sum of the digits
    while (value > 0) {
        int digit = value % 10;
        sum += digit;
        value /= 10;
    }

    // Print the sum of the digits
    printf("Sum of digits: %d\n", sum);
}

int main() {
    char str[100];  // Increase the buffer size to handle more input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Safe input reading

    // Print the original string
    printf("You entered: %s", str);

    // Call the add function to process the input string
    add(str);

    return 0;
}
