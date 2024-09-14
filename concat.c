#include <stdio.h>

int main() {
    int i, j;
    char a[100], b[50];

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    // Remove newline character from first string if present
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == '\n') {
            a[i] = '\0';
            break;
        }
    }

    // Remove newline character from second string if present
    for (j = 0; b[j] != '\0'; j++) {
        if (b[j] == '\n') {
            b[j] = '\0';
            break;
        }
    }

    // Concatenate a space at the end of the first string
    a[i] = ' ';
    i++;

    // Concatenate the second string to the first string
    for (j = 0; b[j] != '\0'; j++, i++) {
        a[i] = b[j];
    }
    a[i] = '\0';  // Null-terminate the resulting string

    printf("Concatenated string: %s\n", a);

    return 0;
}
