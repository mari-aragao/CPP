/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 01:38:07 by maragao           #+#    #+#             */
/*   Updated: 2023/08/18 01:38:07 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}
Intern::Intern(Intern const &i)
{
    (void)i;
}
Intern::~Intern(void) {}
Intern  &Intern::operator=(Intern const &i)
{
    (void)i;
    return (*this);
}

AForm *Intern::makeSCF(std::string target)
{
    AForm *form = new ShrubberyCreationForm(target);
    return (form);
}
AForm *Intern::makeRRF(std::string target)
{
    AForm *form = new RobotomyRequestForm(target);
    return (form);
}

AForm *Intern::makePPF(std::string target)
{
    AForm *form = new PresidentialPardonForm(target);
    return (form);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string nameForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    AForm *(Intern::*returnForm[3]) (std::string) = {&Intern::makeSCF, &Intern::makeRRF, &Intern::makePPF};
    
    for (int i = 0; i < 3; i++)
    {
        if (name == nameForms[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*returnForm[i])(target);
        }
    }
    std::cerr << "Intern can't create " << target << " because " << name << " is not an valid form" << std::endl;
    return NULL;
}