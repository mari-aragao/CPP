/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 01:38:11 by maragao           #+#    #+#             */
/*   Updated: 2023/08/18 01:38:11 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
    Intern(void);
    Intern(Intern const &i);
    ~Intern(void);
    Intern  &operator=(Intern const &i);

    AForm *makeForm(std::string name, std::string target);

private:
    AForm *makeSCF(std::string target);
    AForm *makePPF(std::string target);
    AForm *makeRRF(std::string target);
};
#endif