/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:47:06 by maragao           #+#    #+#             */
/*   Updated: 2023/08/10 18:59:35 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string _type;

public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(AMateria const & materia);
    virtual ~AMateria(void);
    AMateria            &operator=(AMateria const & materia);
    
    std::string const   &getType(void) const;
    virtual AMateria    &clone(void) const = 0;
    virtual void        use(ICharacter & target);
};

#endif
