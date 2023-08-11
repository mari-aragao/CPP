/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 01:01:42 by maragao           #+#    #+#             */
/*   Updated: 2023/08/10 19:19:59 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & ms)
{
    for (int i = 0; i < 4; i++)
    {
        _materia[i] = &ms._materia[i]->clone();
    }
    *this = ms;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
    }
}

MateriaSource   &MateriaSource::operator=(MateriaSource const & ms)
{
    for(int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
        _materia[i] = NULL;
        if (ms._materia[i])
            _materia[i] = &ms._materia[i]->clone();
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] == NULL)
        {
            _materia[i] = &m->clone();
            std::cout << "Learn " << m->getType() << " materia" << std::endl;
            return ;
        }
    }
    std::cout << "Can not learn " << m->getType() << " materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i]->getType() == type)
        {
            std::cout << "Create " << _materia[i]->getType() << " materia" << std::endl;
            return &_materia[i]->clone();
        }
    }
    std::cout << "Can not create " << type << " materia" << std::endl;
    return NULL;
}
