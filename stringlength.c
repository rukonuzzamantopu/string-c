#include <stdio.h>


int main() {
    char a[30];
    int i;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    // Initialize i to 0
    i = 0;
 
    // Corrected for loop
    for (i = 0; a[i] != '\0'; i++);

    printf("Length of the string is: %d\n", i);
    return 0;
}
