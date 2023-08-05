/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:37:22 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:37:22 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << std::endl << "----- Animal classes -----" << std::endl << std::endl;

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();
    delete animal;
    delete dog;
    delete cat;

    std::cout << std::endl << "----- Wrong Animal classes -----" << std::endl << std::endl;   
    
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    
    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();
    delete wrongAnimal;
    delete wrongCat;
    
    return 0;
}
