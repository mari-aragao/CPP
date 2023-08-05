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
#include "Brain.hpp"

int main()
{
    std::cout  << std::endl << "--- Allocation of one dog and one cat ---" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    delete dog;
    delete cat;
    
    std::cout  << std::endl << "--- Allocation of an array of animals with a dog and a cat ---" << std::endl;
    const Animal* animals[2] = {new Dog(), new Cat()};

    for (int i = 0; i < 2; i++)
        delete animals[i];

    return 0;
}
