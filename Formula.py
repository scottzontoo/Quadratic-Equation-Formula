import math

# Input coefficients from user
a = float(input("Enter coefficient A: "))
b = float(input("Enter coefficient B: "))
c = float(input("Enter coefficient C: "))

# Calculate the discriminant and Calculating for Positive and Negative
xValue = b ** 2 - 4 * a * c
negativeRoot = (-b - math.sqrt(xValue)) / (2 * a)
positiveRoot = (-b + math.sqrt(xValue)) / (2 * a)

# Output the equations
print("Negative Root:", negativeRoot)
print("Positive Root:", positiveRoot)
