/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:25:29 by maragao           #+#    #+#             */
/*   Updated: 2023/08/16 15:43:12 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal
{
public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &wrongAnimal);
    virtual ~WrongAnimal(void);

    void    makeSound(void) const;
    std::string    getType(void) const;
    WrongAnimal  &operator=(WrongAnimal const &wrongAnimal);

protected:
    std::string type;
};

#endif
