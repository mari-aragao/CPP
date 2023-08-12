/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:19:20 by maragao           #+#    #+#             */
/*   Updated: 2023/08/12 02:19:20 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &scf) :
    AForm(scf.getName(), scf.getGradeRequiredToSign(), scf.getGradeRequiredToExecute()) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) throw()
{
    std::cout << "Shrubbery Creation " << getName() << " destructor called" << std::endl;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &scf)
{
    (void)scf;
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    return ;
}