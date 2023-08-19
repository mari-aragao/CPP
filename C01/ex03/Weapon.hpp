/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:13:41 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:13:41 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class   Weapon
{
public:
    Weapon(std::string type);
    ~Weapon(void);

    std::string const   getType(void);
    void        	    setType(std::string type);

private:
    std::string type;
};

#endif