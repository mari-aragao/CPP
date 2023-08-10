/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:51:10 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 12:51:10 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice(void);
    Ice(Ice const &ice);
    ~Ice(void);
    Ice &operator=(Ice const &ice);

    virtual AMateria    &clone(void) const;
    virtual void        use(ICharacter &target);
};

#endif