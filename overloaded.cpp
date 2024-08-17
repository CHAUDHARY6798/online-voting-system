#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int sum1 = add(3, 4);
    int sum2 = add(2, 5, 7);
    double sum3 = add(2.5, 3.7);

    std::cout << "Sum1: " << sum1 << std::endl; // Output: Sum1: 7
    std::cout << "Sum2: " << sum2 << std::endl; // Output: Sum2: 14
    std::cout << "Sum3: " << sum3 << std::endl; // Output: Sum3: 6.2

    return 0;
}
