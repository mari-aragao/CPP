/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:11:24 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:11:24 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class   HumanA
{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void    attack(void);

private:
    std::string name;
    Weapon  &wpn;
};

#endif