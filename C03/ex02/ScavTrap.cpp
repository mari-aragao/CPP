/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:39:45 by maragao           #+#    #+#             */
/*   Updated: 2023/08/01 19:39:45 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    _name = "scav";
    _hp = 100;
    _ep = 50;
    _ad = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hp = 100;
    _ep = 50;
    _ad = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap) : ClapTrap(scavTrap)
{
    *this = scavTrap;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const & scavTrap)
{
    _name = scavTrap._name;
    _hp = scavTrap._hp;
    _ep = scavTrap._ep;
    _ad = scavTrap._ad;
    return *this;
}

void    ScavTrap::attack(const std::string &target)
{
    if (_ep == 0)
        std::cout << "ScavTrap " << _name
        << "doesn't have enough energy points." << std::endl;
    
    else if (_hp == 0)
    {
        std::cout << "ScavTrap " << _name << " is dead." << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name
        << " attacks " << target
        << ", causing " << _ad
        << " points of damage!" << std::endl;
        _ep--;
    }
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << "is now in Gate keeper mode." << std::endl;
}

std::ostream  &operator<<(std::ostream & o, ScavTrap const &scavTrap)
{
    o << "ScavTrap " << scavTrap._name
    << " has " << scavTrap._ad << " of attack damage, "
    << scavTrap._hp << " of hit points and "
    << scavTrap._ep << " of energy points" << std::endl;
    return o;
}