/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:31:57 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:31:57 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(Dog const &dog) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}


Dog  &Dog::operator=(Dog const &dog)
{
    type = dog.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Au Au Au" << std::endl;
}