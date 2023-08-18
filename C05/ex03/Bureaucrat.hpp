/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:55:23 by maragao           #+#    #+#             */
/*   Updated: 2023/08/11 19:55:23 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <stdexcept>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    std::string const _name;
    int         _grade;

public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &b);
    virtual ~Bureaucrat(void) throw();

    Bureaucrat &operator=(Bureaucrat const &b);
    
    std::string getName(void) const;
    int         getGrade(void) const;
    void        incrementGrade(void);
    void        decrementGrade(void);
    void        signForm(AForm &f);
    void        executeForm(AForm const & form);

    class TooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Bureaucrat::GradeTooHighException");
        }
    };

    class TooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Bureaucrat::GradeTooLowException");
        }
    };    
};

std::ostream  &operator<<(std::ostream & o, Bureaucrat const &b);

#endif