/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:52:16 by maragao           #+#    #+#             */
/*   Updated: 2023/08/09 20:52:16 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource(void);
    MateriaSource(MateriaSource const & ms);
    virtual ~MateriaSource(void);
    MateriaSource   &operator=(MateriaSource const & ms);

    virtual void learnMateria(AMateria *m);
    virtual AMateria* createMateria(std::string const & type);
private:
    AMateria *_materia[4];
};

#endif