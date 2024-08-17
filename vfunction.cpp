#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        std::cout << "Animal sound\n";
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        std::cout << "Woof!\n";
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        std::cout << "Meow!\n";
    }
};

int main() {
    // Create instances of derived classes
    Dog dog;
    Cat cat;

    // Call the virtual function
    dog.makeSound(); // Output: Woof!
    cat.makeSound(); // Output: Meow!

    // Using a base class pointer to demonstrate polymorphism
    Animal* ptr;
    ptr = &dog;
    ptr->makeSound(); // Output: Woof!
    ptr = &cat;
    ptr->makeSound(); // Output: Meow!

    return 0;
}
