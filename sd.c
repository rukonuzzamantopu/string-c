#include <stdio.h>

int main() {
    char a[50], b[50];
    int i = 0, j = 0, k = 0;
    
    // Getting input string from the user
    printf("Enter the string to reverse: ");
    scanf("%[^\n]", a);
    
    // Finding the length of the string
    while (a[i] != '\0') {
        i++;
    }
    
    // Reversing the string
    for (j = i - 1; j >= 0; j--) {
        b[k] = a[j];
        k++;
    }
    
    // Null-terminating the reversed string
    b[k] = '\0';
    
    // Printing the reversed string
    printf("Reversed string: %s\n", b);

    return 0;
}
