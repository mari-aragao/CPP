/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:30:14 by maragao           #+#    #+#             */
/*   Updated: 2023/08/01 15:30:14 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &clapTrap);
    ~ClapTrap(void);

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    ClapTrap &operator=(ClapTrap const &clapTrap);
    friend std::ostream  &operator<<(std::ostream & o, ClapTrap const &clapTrap);

private:
    std::string     _name;
    unsigned int             _hp;
    unsigned int    _ep;
    unsigned int    _ad;

};

#endif