/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:29:49 by maragao           #+#    #+#             */
/*   Updated: 2023/08/01 15:29:49 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("scav1");
    scav.attack("enemy1");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.takeDamage(80);
    scav.guardGate();
    std::cout << std::endl << std::endl;
    
    
    ScavTrap scav2(scav);
    scav2.attack("enemy2");
    scav2.takeDamage(10);
    scav2.beRepaired(10);
    scav.guardGate();
    scav2.takeDamage(15);
    scav2.attack("enemy3");
    std::cout << std::endl;
    
    return 0;
}