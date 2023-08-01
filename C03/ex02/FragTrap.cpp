/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:16:39 by maragao           #+#    #+#             */
/*   Updated: 2023/08/01 20:16:39 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    _name = "frag";
    _hp = 100;
    _ep = 100;
    _ad = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hp = 100;
    _ep = 100;
    _ad = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrap) : ClapTrap(fragTrap)
{
    *this = fragTrap;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const & fragTrap)
{
    _name = fragTrap._name;
    _hp = fragTrap._hp;
    _ep = fragTrap._ep;
    _ad = fragTrap._ad;
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " gives high five guys" << std::endl;
}

std::ostream  &operator<<(std::ostream & o, FragTrap const &fragTrap)
{
    o << "FragTrap " << fragTrap._name
    << " has " << fragTrap._ad << " of attack damage, "
    << fragTrap._hp << " of hit points and "
    << fragTrap._ep << " of energy points" << std::endl;
    return o;
}