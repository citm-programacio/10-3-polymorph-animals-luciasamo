// polymorphAnimals.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Make a class “Animal” with the abstract method speak()
//
//Make classes “dog” and “cat” that inherit from animal.
//
//Override the speak method
//
//Make the objects and call speak from main



#include <iostream>
using namespace std;

// Abstract class Animal
class Animal {
public:
    // Pure virtual function (abstract method)
    virtual void speak() = 0;

    // Virtual destructor (to handle cleanup in derived classes)
    virtual ~Animal() {}
};

// Class Dog inherits from Animal
class Dog : public Animal {
public:
    // Override the speak method for Dog
    void speak() override {
        cout << "Woof!" << endl;
    }
};

// Class Cat inherits from Animal
class Cat : public Animal {
public:
    // Override the speak method for Cat
    void speak() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    // Create objects of Dog and Cat
    Dog dog;
    Cat cat;

    // Call speak() method on both objects
    dog.speak();  // Output: Woof!
    cat.speak();  // Output: Meow!

    return 0;
}
