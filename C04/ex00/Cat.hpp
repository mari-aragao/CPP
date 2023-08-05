/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:30:02 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:30:02 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(Cat const &cat);
    ~Cat(void);

    virtual void    makeSound(void) const;
    Cat     &operator=(Cat const &cat);
};

#endif