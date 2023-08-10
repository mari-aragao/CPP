/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:50:24 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 12:50:24 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) :_type("none") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const & materia) : _type(materia._type) {}

AMateria::~AMateria(void) {}

AMateria    &AMateria::operator=(AMateria const & materia)
{
    _type = materia._type;
    return *this;
}

std::string const   &AMateria::getType(void) const
{
    return _type;
}

void    AMateria::use(ICharacter &target)
{
    (void)target;
    return ;
}