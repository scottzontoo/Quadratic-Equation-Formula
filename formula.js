// Node.js
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Declaring Variables for input
let a, b, c;
// Declaring Variables for processing and output
let xValue, negativeRoot, positiveRoot;

// Input coefficients from user
rl.question("Enter coefficient A: ", (input) => {
    a = parseFloat(input);
    rl.question("Enter coefficient B: ", (input) => {
        b = parseFloat(input);
        rl.question("Enter coefficient C: ", (input) => {
            c = parseFloat(input);

            // Calculate the discriminant and Calculating for Positive and Negative
            xValue = b * b - 4 * a * c;
            negativeRoot = (-b - Math.sqrt(xValue)) / (2 * a);
            positiveRoot = (-b + Math.sqrt(xValue)) / (2 * a);

            // Output the equations
            console.log("Negative Root: " + negativeRoot);
            console.log("Positive Root: " + positiveRoot);
            rl.close();
        });
    });
});
