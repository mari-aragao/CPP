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

int main(void)
{
    try
    {
        Bureaucrat b1("b1", 2);
        std::cout << b1 << std::endl;

        Bureaucrat b2("b2", 1);
        std::cout << b2 << std::endl;
        
        Bureaucrat b3("b3", 150);
        std::cout << b3 << std::endl;

        b1.incrementGrade();
        std::cout << b1 << std::endl;
        b2.decrementGrade();
        std::cout << b2 << std::endl;
        b1.incrementGrade();
        std::cout << b1 << std::endl;
        
        //Bureaucrat b5("b5", 151);
        //Bureaucrat b4("b4", 0);    
    }
    catch (Bureaucrat::TooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::TooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}