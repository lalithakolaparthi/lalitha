#include <iostream>

// Function Definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cout << "Error: Division by zero! ";
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Calling the functions and storing/displaying their return values
    std::cout << "\n--- Results ---" << "\n";
    std::cout << "Addition: " << add(num1, num2) << "\n";
    std::cout << "Subtraction: " << subtract(num1, num2) << "\n";
    std::cout << "Multiplication: " << multiply(num1, num2) << "\n";
    std::cout << "Division: " << divide(num1, num2) << "\n";

    return 0;
}