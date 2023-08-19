/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:12:21 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:12:21 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {}

HumanB::~HumanB(void) {}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->wpn->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->wpn = &weapon;
}