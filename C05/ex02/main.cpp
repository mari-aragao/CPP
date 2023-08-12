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

int main(void)
{
    try
    {
        Bureaucrat b1("b1", 100);
        AForm *scf = new ShrubberyCreationForm("scf");
        AForm *rrf = new RobotomyRequestForm("rrf");
        AForm *ppf = new PresidentialPardonForm("ppf");

        std::cout << *scf << std::endl << *rrf << std::endl << *ppf << std::endl;

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