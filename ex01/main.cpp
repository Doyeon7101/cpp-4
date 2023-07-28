#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main( void ) {
    const int n = 10;
    Animal* arr[n];
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) arr[i] = new Dog();
        else arr[i] = new Cat();
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++) {
        delete arr[i];
    } 
    system("leaks ex01");
}