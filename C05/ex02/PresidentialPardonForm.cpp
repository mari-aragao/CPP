/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:16:01 by maragao           #+#    #+#             */
/*   Updated: 2023/08/17 17:59:35 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential Pardon", 25, 5)
{
	setTarget("ppf");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5)
{
	setTarget("ppf");
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ppf) :
    AForm(ppf.getName(), ppf.getGradeRequiredToSign(), ppf.getGradeRequiredToExecute())
{
	setTarget(ppf.getTarget());
}

PresidentialPardonForm::~PresidentialPardonForm(void) throw()
{
    std::cout << "Presidential Pardon " << getTarget() << " destructor called" << std::endl;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &ppf)
{
    setTarget(ppf.getTarget());
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (getIsSign() == true && getGradeRequiredToExecute() <= 5)
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
	    throw TooLowException();
}
