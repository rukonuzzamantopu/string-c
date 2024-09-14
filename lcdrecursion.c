#include <stdio.h>

// Function to find the GCD of two numbers using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to find the LCD using the GCD
int lcd(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers to find their LCD: ");
    scanf("%d %d", &num1, &num2);
    
    int result = lcd(num1, num2);
    
    printf("The Least Common Divisor (LCD) of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}
