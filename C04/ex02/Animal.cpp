/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:27:27 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:27:27 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(Animal const &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}


Animal  &Animal::operator=(Animal const &animal)
{
    type = animal.type;
    return (*this);
}

std::string    Animal::getType(void) const
{
    return type;
}