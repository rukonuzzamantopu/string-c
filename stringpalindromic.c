#include <stdio.h>

// Function to convert character to lowercase
char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

// Function to check if a character is alphanumeric
int isAlphanumeric(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = stringLength(str) - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isAlphanumeric(str[left])) {
            left++;
        }
        while (left < right && !isAlphanumeric(str[right])) {
            right--;
        }

        // Compare characters after converting to lowercase
        if (toLowerCase(str[left]) != toLowerCase(str[right])) {
            return 0;  // Not a palindrome
        }

        left++;
        right--;
    }

    return 1;  // Is a palindrome
}

int main() {
    char str[500];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end of the input string
    int length = stringLength(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
