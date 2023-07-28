#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    std::cout << "j->getType(): " << j->getType() << std::endl;
    std::cout << "i->getType(): " << i->getType() << std::endl;

    std::cout << std::endl;
    meta->makeSound();
    j->makeSound(); //will output the cat sound!
    i->makeSound();

    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    system("leaks ex00");
    return 0;
}