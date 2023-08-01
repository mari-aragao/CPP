/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:30:31 by maragao           #+#    #+#             */
/*   Updated: 2023/08/01 19:30:31 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & scavTrap);
    ~ScavTrap(void);

    void    guardGate(void);
    void    attack(const std::string &target);

    ScavTrap &operator=(ScavTrap const &scavTrap);
    friend std::ostream  &operator<<(std::ostream & o, ScavTrap const &scavTrap);
};

#endif