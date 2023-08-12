/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 00:57:18 by maragao           #+#    #+#             */
/*   Updated: 2023/08/12 00:57:18 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
    _name("form"), _isSign(false), _gToSign(1),
    _gToExecute(1) {}

Form::Form(Form const &f) :
    _name(f._name), _isSign(false), _gToSign(f._gToSign), _gToExecute(f._gToExecute) {}


Form::Form(std::string const name, int const gToSign, int const gToExecute) :
    _name(name), _isSign(false), _gToSign(gToSign), _gToExecute(gToExecute)
{
    if (_gToSign < 1 || _gToExecute < 1)
        throw TooHighException();
    if (_gToSign > 150 || _gToExecute > 150)
        throw TooLowException();
}

Form::~Form(void) throw()
{
    std::cout << "Destructor " << _name << "called" << std::endl;
}

Form    &Form::operator=(Form const &f)
{
    _isSign = f._isSign;
    return *this;
}

std::string Form::getName(void) const
{
    return _name;
}

bool    Form::getIsSign(void) const
{
    return _isSign;
}

int Form::getGradeRequiredToSign(void) const
{
    return _gToSign;
}

int Form::getGradeRequiredToExecute(void) const
{
    return _gToExecute;
}

void    Form::beSign(Bureaucrat const &b)
{
    if (b.getGrade() > _gToSign)
        throw TooLowException();
    _isSign = true;
}

std::ostream &operator<<(std::ostream &o, Form const &f)
{
    o << "Form: " << f.getName() << std::endl
    << "Is Sign: " << f.getIsSign() << std::endl
    << "Grade to sign: " << f.getGradeRequiredToSign() << std::endl
    << "Grade to execute: " << f.getGradeRequiredToExecute() << std::endl;
    return o;
}