#include <stdio.h>

// Function prototype
int stringlength(const char *a);

int main() {
    char a[200];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    // Remove the newline character from the string
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '\n') {
            a[i] = '\0'; // Replace '\n' with '\0'
            break;
        }
    }

    int length = stringlength(a);
    printf("Length of the string: %d\n", length);

    return 0;
}

// Recursive function to find the length of the string
int stringlength(const char *a) {
    if (*a == '\0') {
        return 0;
    }
    return 1 + stringlength(a + 1);
}
