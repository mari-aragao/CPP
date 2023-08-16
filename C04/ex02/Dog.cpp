/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:31:57 by maragao           #+#    #+#             */
/*   Updated: 2023/08/16 15:49:19 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog const &dog) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*dog.brain);
    type = dog.type;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}


Dog  &Dog::operator=(Dog const &dog)
{
    type = dog.type;
    if (brain)
	    delete brain;
    brain = new Brain(*dog.brain);
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Au Au Au" << std::endl;
}
