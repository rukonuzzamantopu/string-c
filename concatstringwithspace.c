#include <stdio.h>

void concat_with_space(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy first string to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Add a space
    result[i] = ' ';
    i++;

    // Copy second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null terminate the result string
    result[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[201];

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character if present
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    // Concatenate with space
    concat_with_space(str1, str2, result);

    // Print the result
    printf("Concatenated string: %s\n", result);

    return 0;
}
