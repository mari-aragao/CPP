/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:10:57 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:10:57 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), wpn(weapon) {}

HumanA::~HumanA(void) {}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->wpn.getType() << std::endl;
}