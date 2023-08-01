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

int main(void)
{
    ClapTrap clap("clap");

    clap.attack("enemy");
    clap.beRepaired(10);
    clap.takeDamage(2);

    std::cout << clap << std::endl << std::endl;

    ClapTrap clap2(clap);
    clap.attack("enemy2");
    clap2.takeDamage(10);
    clap2.takeDamage(10);
    clap2.beRepaired(10);

    std::cout << clap2 << std::endl;
    return 0;
}