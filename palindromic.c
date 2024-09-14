#include <stdio.h>

int main() {
    int i, j, k;
    char a[50], b[50];
    
    // Getting input string from the user
    printf("Enter the string to check palindromic: ");
    scanf("%[^\n]", a);
    
    
    // Finding the length of the string
    for(i=0;a[i] != '\0'; i++);
    /*i = 0;
    while (a[i] != '\0') {
        i++;
    }*/
    
    // Initializing k to 0 before starting the reversal process
    k = 0;
    
    // Reversing the string
    for (j = i - 1; j >= 0; j--) {
        b[k] = a[j];
        k++;
    }
    
    // Null-terminating the reversed string
    b[k] = '\0';
    
    // Printing the reversed string
    printf("Reversed string: %s\n", b);
    
    // Checking for palindrome
    i = 0;
    while (a[i] == b[i] && a[i] != '\0') {
        i++;
    }
    if (a[i] == '\0') {
        printf("Palindromic\n");
    } else {
        printf("Not palindromic\n");
    }

    return 0;
}
