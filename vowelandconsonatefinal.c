/*write a c program to find in a string vowel and consonate*/
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels, consonants;
    
    // Initialize counters
    vowels = 0;
    consonants = 0;
    
    // Read the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check for vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            vowels++;
        }
        // Check for consonants (considering only alphabetic characters)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }

    // Print the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
