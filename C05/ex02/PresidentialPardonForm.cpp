/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:16:01 by maragao           #+#    #+#             */
/*   Updated: 2023/08/12 02:16:01 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Shrubbery creation", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ppf) :
    AForm(ppf.getName(), ppf.getGradeRequiredToSign(), ppf.getGradeRequiredToExecute()) {}

PresidentialPardonForm::~PresidentialPardonForm(void) throw()
{
    std::cout << "Shrubbery Creation " << getName() << " destructor called" << std::endl;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &ppf)
{
    (void)ppf;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    return ;
}