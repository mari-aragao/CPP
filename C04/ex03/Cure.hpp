/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:51:10 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 12:51:10 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(Cure const &cure);
    ~Cure(void);
    Cure &operator=(Cure const &cure);

    virtual AMateria    &clone(void) const;
    virtual void        use(ICharacter &target);
};

#endif