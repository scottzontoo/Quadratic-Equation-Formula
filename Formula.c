#include <stdio.h>
#include <math.h>

int main() {
    // Declaring of Variables for input
    double a, b, c;
    // Declaring of Variable for processing and output
    double xValue, negativeRoot, positiveRoot;

    // Input coefficients from user
    printf("Enter coefficient A: ");
    scanf("%lf", &a);
    printf("Enter coefficient B: ");
    scanf("%lf", &b);
    printf("Enter coefficient C: ");
    scanf("%lf", &c);

    // Calculate the discriminant and Calculating for Positive and Negative
    xValue = b * b - 4 * a * c;
    negativeRoot = (-b - sqrt(xValue)) / (2 * a);
    positiveRoot = (-b + sqrt(xValue)) / (2 * a);

    // Output the equations
    printf("Negative Root: %lf\n", negativeRoot);
    printf("Positive Root: %lf\n", positiveRoot);

    return 0;
}
