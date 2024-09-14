#include <stdio.h>

int main() {
    char str[100];
    int i;
    int alphabets = 0, digits = 0, specialChars = 0;

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != '\n') { // Exclude the newline character
            specialChars++;
        }
    }

    // Print the counts
    printf("Alphabets: %d\nDigits: %d\nSpecial characters: %d\n", alphabets, digits, specialChars);

    return 0;
}
