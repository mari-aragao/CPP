/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:19:00 by maragao           #+#    #+#             */
/*   Updated: 2023/08/11 20:19:00 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw TooHighException();
    else if (grade > 150)
        throw TooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &b) : _name(b._name), _grade(b._grade) {}

Bureaucrat::~Bureaucrat(void) throw()
{
    std::cout << "Destructor " << getName() << " called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b)
{
    _grade = b._grade;
    return *this;
}

std::string   Bureaucrat::getName(void) const
{
    return (_name);
}

int           Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void    Bureaucrat::incrementGrade(void)
{
    if (_grade == 1)
        throw TooHighException();
    else
        _grade--;
}

void    Bureaucrat::decrementGrade(void)
{
    if (_grade == 150)
        throw TooLowException();
    else
        _grade++;
}

void        Bureaucrat::signForm(AForm &f)
{
    if (f.getIsSign() == true)
        std::cout << _name << " signed " << f.getName() << std::endl;
    else if (f.getIsSign() == false)
    {
        if (_grade <= f.getGradeRequiredToSign())
            std::cout << _name << " couldn't sign " << f.getName() << " because he didn't request yet" << std::endl;
        else if (_grade > f.getGradeRequiredToSign())
            std::cout << _name << " couldn't sign " << f.getName() << " because bureaucrat's grade is too low" << std::endl;
    }
}

void        Bureaucrat::executeForm(AForm const & form)
{
    form.execute(*this);
    std::cout << _name << " executed " << form.getName() << std::endl;
}

std::ostream  &operator<<(std::ostream & o, Bureaucrat const & b)
{
    o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return o;
}