/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:10:17 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 13:10:17 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp" 

class Character : public ICharacter
{
public:
    Character(void);
    Character(std::string const name);
    Character(Character const &c);
    virtual ~Character(void);
    Character   &operator=(Character const &c);

    std::string const   &getName(void) const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);

private:
    std::string _name;
    AMateria    *_materia[4];
};

#endif