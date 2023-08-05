/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:27:27 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:27:27 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wrongAnimal;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}


WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &wrongAnimal)
{
    type = wrongAnimal.type;
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong animal sound" << std::endl;
}

std::string    WrongAnimal::getType(void) const
{
    return type;
}