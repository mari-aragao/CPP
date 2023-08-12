/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:17:54 by maragao           #+#    #+#             */
/*   Updated: 2023/08/12 02:17:54 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Shrubbery creation", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rrf) :
    AForm(rrf.getName(), rrf.getGradeRequiredToSign(), rrf.getGradeRequiredToExecute()) {}

RobotomyRequestForm::~RobotomyRequestForm(void) throw()
{
    std::cout << "Shrubbery Creation " << getName() << " destructor called" << std::endl;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(RobotomyRequestForm const &rrf)
{
    (void)rrf;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    return ;
}