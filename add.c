// C program to add two numbers
#include <stdio.h>

int main() {
    int A, B, sum = 0;

    // Ask user to enter the two numbers
    printf("Enter two integers: ");

    // Read two numbers from the user || A = 2, B = 3
    scanf("%d %d", &A, &B);

    // Calculate the addition of A and B
    // using '+' operator
    sum = A + B;

    // Print the sum
    printf("Sum: %d", sum);

    return 0;
}
