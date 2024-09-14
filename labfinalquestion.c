#include <stdio.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    start = 0;
    while (str[start] != '\0') {
        // Find the end of the current word
        end = start;
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }

        // Reverse the current word
        reverseWord(&str[start], &str[end - 1]);

        // Move to the start of the next word
        start = end;
        while (str[start] == ' ') {
            start++;
        }
    }

    printf("Reversed words string: %s\n", str);
    return 0;
}
