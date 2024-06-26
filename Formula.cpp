include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declaring of Variables for input

    double a;
    double b;
    double c;
    // Declaring of Variable for processing and output

    double xValue;
    double negativeRoot;
    double positiveRoot;

    // Input coefficients from user
    cout << "Enter coefficient A: ", cin >> a, cout << endl;
    cout << "Enter coefficient B: ", cin >> b, cout << endl;
    cout << "Enter coefficient C: ", cin >> c, cout << endl;

    // Calculate the discriminant and Calculating for Positive and Negative
    xValue = b * b - 4 * a * c;
    negativeRoot = (-b - sqrt(xValue)) / (2 * a);
    positiveRoot = (-b + sqrt(xValue)) / (2 * a);

    // Output the equations
    cout << "Negative Root: " << negativeRoot << endl;
    cout << "Positive Root: " << positiveRoot << endl;

    return 0;
}
