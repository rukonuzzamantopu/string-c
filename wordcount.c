/*write a c program in a string to find word*/
#include <stdio.h>

int main() {
    char str[500];
    int i, wordCount;
    
    wordCount = 0;
    
    // Read the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the current character is not a space and either it is
        // the first character or the previous character is a space
        if ((str[i] != ' ' && str[i] != '\n') && 
            (i == 0 || str[i-1] == ' ' || str[i-1] == '\n')) {
            wordCount++;
        }
    }
    
    // Print the result
    printf("Word count: %d\n", wordCount);
    
    return 0;
}
