/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:56:20 by maragao           #+#    #+#             */
/*   Updated: 2023/08/10 19:10:48 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &cure) : AMateria(cure.getType())
{
    *this = cure;
}

Cure::~Cure(void) {}

Cure &Cure::operator=(Cure const &cure)
{
    _type = cure._type;
    return *this;
}

AMateria    &Cure::clone(void) const
{
    AMateria *cure = new Cure();
    return *cure;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
