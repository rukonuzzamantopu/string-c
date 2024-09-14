/*write a c program to input string from user and reverse string store 
another variable and print this string*/
#include <stdio.h>

int main() {
    int i, j, k = 0;  // Initialize k to 0
    char a[40], b[40];  // Ensure size of b is same as a
    printf("Enter a string: ");
    scanf("%[^\n]", a);  // Limit input to 39 characters to avoid overflow
    // Find the length of the string a
    for (i = 0; a[i] != '\0'; i++);
    // Reverse the string
    for (j = i - 1; j >= 0; j--) {
        b[k] = a[j];
        k++;
    }
    b[k] = '\0';  // Null-terminate the reversed string
    printf("Reversed string: kkkk\n", b);
    return 0;
}
