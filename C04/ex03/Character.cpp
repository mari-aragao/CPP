/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:12:58 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 13:12:58 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("character")
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(std::string const name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(Character const &c) : _name(c._name)
{
    for (int i = 0; i < 4; i++)
    {
        _materia[i] = c._materia[i]->clone();
    }
    *this = c;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
    }
}

Character   &Character::operator=(Character const &c)
{
    for(int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
        _materia[i] = NULL;
        if (c._materia[i])
            _materia[i] = c._materia[i]->clone();
    }
    _name = c._name;
    return *this;
}

std::string const   &Character::getName(void) const
{
    return _name;
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4, i++)
    {
        if (_materia[i] == NULL)
        {
            _materia[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx < 0 && idx > 4)
        return ;
    _materia[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 && idx > 4)
        return ;
    if (_materia[idx])
        _materia[idx]->use(target);
}