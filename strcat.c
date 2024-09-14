/*write a c program to string add */
#include <stdio.h>

int main() {
    int i, j;
    char a[60], b[30];  // Ensure 'a' is large enough to hold both strings

    printf("Enter the first string: ");
    fgets(a,sizeof(a),stdin);
    //gets(a); // Read first string

    printf("Enter the second string: ");
    fgets(b,sizeof(b),stdin);
    //gets(b); // Read second string

    // Find the end of the first string
    for (i = 0; a[i] != '\0'; i++);

    // Append the second string to the first string
    for (j = 0; b[j] != '\0'; j++) {
        a[i + j] = b[j];
    }

    // Null-terminate the resulting string
    a[i + j] = '\0';

    printf("Resulting string: %s", a);

    return 0;
}
