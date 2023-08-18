/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:17:54 by maragao           #+#    #+#             */
/*   Updated: 2023/08/17 17:59:07 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Request", 72, 45)
{
	setTarget("rrf");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45)
{
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rrf) :
    AForm(rrf.getName(), rrf.getGradeRequiredToSign(), rrf.getGradeRequiredToExecute())
{
	setTarget(rrf.getTarget());
}

RobotomyRequestForm::~RobotomyRequestForm(void) throw()
{
    std::cout << "Robotomy Request " << getTarget() << " destructor called" << std::endl;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(RobotomyRequestForm const &rrf)
{
    setTarget(rrf.getTarget());
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (getIsSign() == true && executor.getGrade() <= getGradeRequiredToExecute())
	    std::cout << "**making some drilling noises**" << std::endl
		    << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
    else
	    throw TooLowException();
}
