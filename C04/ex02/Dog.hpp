/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:30:02 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:30:02 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog(void);
    Dog(Dog const &dog);
    ~Dog(void);

    virtual void    makeSound(void) const;
    Dog  &operator=(Dog const &dog);

private:
    Brain *brain;
};

#endif