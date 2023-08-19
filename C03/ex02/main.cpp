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
#include "fragTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("frag1");
    frag.attack("enemy1");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.takeDamage(80);
    frag.highFivesGuys();
    std::cout << std::endl;
    
    
    FragTrap frag2(frag);
    frag2.attack("enemy2");
    frag2.takeDamage(10);
    frag2.beRepaired(10);
    frag2.takeDamage(15);
    frag2.attack("enemy3");
    frag2.highFivesGuys();
    std::cout << std::endl;
    
    return 0;
}