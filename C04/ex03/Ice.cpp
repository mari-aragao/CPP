/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:56:20 by maragao           #+#    #+#             */
/*   Updated: 2023/08/10 19:10:14 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &ice) : AMateria(ice.getType())
{
    *this = ice;
}

Ice::~Ice(void) {}

Ice &Ice::operator=(Ice const &ice)
{
    _type = ice._type;
    return *this;
}

AMateria    &Ice::clone(void) const
{
    AMateria *ice = new Ice();
    return (*ice);
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
