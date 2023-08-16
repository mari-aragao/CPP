/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:25:29 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 10:25:29 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
public:
    Animal(void);
    Animal(Animal const &animal);
    virtual ~Animal(void);

    virtual void    makeSound(void) const;
    std::string    getType(void) const;
    Animal  &operator=(Animal const &animal);

protected:
    std::string type;
};

#endif
