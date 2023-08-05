/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:31:57 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:31:57 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &wrongCat) : WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}


WrongCat  &WrongCat::operator=(WrongCat const &wrongCat)
{
    type = wrongCat.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong cat sound" << std::endl;
}