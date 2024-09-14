#include <stdio.h>

// Function to find GCD using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate GCD
    int result = gcd(num1, num2);
    
    // Output the result
    printf("GCD of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}
