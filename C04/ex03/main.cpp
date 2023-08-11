/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 02:22:19 by maragao           #+#    #+#             */
/*   Updated: 2023/08/10 02:22:19 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(ice);
    
    delete ice;
    delete cure;
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    me->unequip(3);
    me->use(3, *bob);

    me->use(4, *bob);

    delete bob;
    delete me;
    delete src;
    delete tmp;

    return 0;
}
