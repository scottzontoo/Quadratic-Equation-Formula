import java.util.Scanner;

public class QuadraticEquationSolver {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Declaring Variables for input
        double a, b, c;
        // Declaring Variables for processing and output
        double xValue, negativeRoot, positiveRoot;

        // Input coefficients from user
        System.out.print("Enter coefficient A: ");
        a = scanner.nextDouble();
        System.out.print("Enter coefficient B: ");
        b = scanner.nextDouble();
        System.out.print("Enter coefficient C: ");
        c = scanner.nextDouble();

        // Calculate the discriminant and Calculating for Positive and Negative
        xValue = b * b - 4 * a * c;
        negativeRoot = (-b - Math.sqrt(xValue)) / (2 * a);
        positiveRoot = (-b + Math.sqrt(xValue)) / (2 * a);

        // Output the equations
        System.out.println("Negative Root: " + negativeRoot);
        System.out.println("Positive Root: " + positiveRoot);
    }
}
