/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:19:20 by maragao           #+#    #+#             */
/*   Updated: 2023/08/17 18:05:07 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("shrubbery creation", 145, 137)
{
	setTarget("scf");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery creation", 145, 137)
{
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &scf) :
    AForm(scf.getName(), scf.getGradeRequiredToSign(), scf.getGradeRequiredToExecute())
{
	setTarget(scf.getTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) throw()
{
    std::cout << "Shrubbery Creation " << getTarget() << " destructor called" << std::endl;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &scf)
{
    setTarget(scf.getTarget()); 
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (getIsSign() == true && executor.getGrade() <= getGradeRequiredToExecute())
    {
	    std::fstream	file;
	    std::string		fileName = getTarget().append("_shrubbery");
	    
	    file.open(fileName.c_str(), std::ofstream::trunc | std::ofstream::out);
	    file << "      .{{}}}}}}." << std::endl
		    << "    {{{{{{(`)}}}." << std::endl
		    << "   {{{(`)}}}}}}}}}" << std::endl
		    << "  }}}}}}}}}{{(`){{{" << std::endl
		    << "  }}}}{{{{(`)}}{{{{" << std::endl
		    << " {{{(`)}}}}}}}{}}}}}" << std::endl
		    << "{{{{{{{}}}}}}}}}}}}}}" << std::endl
		    << "{{{{{{{}{{{{(`)}}}}}}" << std::endl
		    << " {{{{{}}}   {{{}}}}}" << std::endl
		    << "  {{{{{ |   | }}}}}" << std::endl
		    << "        |   |" <<std::endl
		    << " ~~~~~~~~~~~~~~~~~~~" << std::endl;
	    file.close();
    }
    else
	    throw TooLowException();
}
