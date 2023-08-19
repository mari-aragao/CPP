/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:12:12 by maragao           #+#    #+#             */
/*   Updated: 2023/08/01 20:12:12 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & fragTrap);
    ~FragTrap(void);

    void    highFivesGuys(void);

    FragTrap &operator=(FragTrap const &fragTrap);
};
#endif