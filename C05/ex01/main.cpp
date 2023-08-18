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
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat b1("b1", 101);
        std::cout << b1 << std::endl;
        
        Form    f1("f1", 100, 100);
        std::cout << f1 << std::endl;

        b1.signForm(f1);
        b1.incrementGrade();
        std::cout << b1 << std::endl;
        b1.signForm(f1);
        f1.beSign(b1);
        b1.signForm(f1);

        Bureaucrat b2("b2", 150);
        std::cout << std::endl << b2 << std::endl;
        
        Form    f2("f2", 10, 10);
        std::cout << f2 << std::endl;

        b2.signForm(f2);
        f2.beSign(b2); // Exception: Form::GradeTooLowException
        //b2.decrementGrade(); // Exception: Bureaucrat::GradeTooLowException
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}