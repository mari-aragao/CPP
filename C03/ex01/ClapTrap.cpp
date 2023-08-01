/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:30:19 by maragao           #+#    #+#             */
/*   Updated: 2023/08/01 15:30:19 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("clap"), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap)
{
    *this = clapTrap;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &clapTrap)
{
    _name = clapTrap._name;
    _hp = clapTrap._hp;
    _ep = clapTrap._ep;
    _ad = clapTrap._ad;
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (_ep == 0)
        std::cout << "ClapTrap " << _name
        << "doesn't have enough energy points." << std::endl;
    
    else if (_hp == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name
        << " attacks " << target
        << ", causing " << _ad
        << " points of damage!" << std::endl;
        _ep--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hp <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead." << std::endl;
        _hp = 0;
    }
    else
    {
        std::cout << "ClapTrap " << _name
        << " took " << amount
        << " of points of damage!" << std::endl;
        _hp -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_ep == 0)
        std::cout << "ClapTrap " << _name
        << " doesn't have enough energy points." << std::endl;
    else if (_hp == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name
        << " was repaired with " << amount
        << " points!" << std::endl;
        _hp += amount;
        _ep--;
    }
}

std::ostream  &operator<<(std::ostream & o, ClapTrap const &clapTrap)
{
    o << "ClapTrap " << clapTrap._name
    << " has " << clapTrap._ad << " of attack damage, "
    << clapTrap._hp << " of hit points and "
    << clapTrap._ep << " of energy points" << std::endl;
    return o;
}