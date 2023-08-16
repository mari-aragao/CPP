/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:31:57 by maragao           #+#    #+#             */
/*   Updated: 2023/08/16 15:46:05 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const &cat) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*cat.brain);
    *this = cat;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}


Cat  &Cat::operator=(Cat const &cat)
{
    type = cat.type;
    if (brain)
	    delete brain;
    brain = new Brain(*cat.brain);
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miau Miau Miau" << std::endl;
}
