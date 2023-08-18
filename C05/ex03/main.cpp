/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:05:58 by maragao           #+#    #+#             */
/*   Updated: 2023/08/11 19:05:58 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        Bureaucrat b1("b1", 100);
        Bureaucrat b2("b2", 45);
        Bureaucrat b3("b3", 2);
        
        Intern intern;
        AForm *scf = intern.makeForm("shrubbery creation", "scf");
        AForm *rrf = intern.makeForm("robotomy request", "rrf");
        AForm *ppf = intern.makeForm("presidential pardon", "ppf");
        std::cout << *scf << std::endl << *rrf << std::endl << *ppf << std::endl;

        b1.signForm(*scf);
        b1.signForm(*rrf);
        b1.signForm(*ppf);
        scf->beSign(b1);
        b1.signForm(*scf);
        scf->execute(b1);

        std::cout << std::endl;
        b2.signForm(*rrf);
        b2.signForm(*ppf);
        rrf->beSign(b2);
        b2.signForm(*rrf);
        rrf->execute(b2);
        
        std::cout << std::endl;
        b3.signForm(*ppf);
        ppf->beSign(b3);
        b3.signForm(*ppf);
        ppf->execute(b3);

        std::cout << std::endl;
        delete scf;
        delete rrf;
        delete ppf;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}