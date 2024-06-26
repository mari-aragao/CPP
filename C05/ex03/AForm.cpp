/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 00:57:18 by maragao           #+#    #+#             */
/*   Updated: 2023/08/17 17:55:02 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) :
    _name("form"), _target("target"), _isSign(false), _gToSign(1),
    _gToExecute(1) {}

AForm::AForm(AForm const &f) :
    _name(f._name), _target(f._target), _isSign(false), _gToSign(f._gToSign), _gToExecute(f._gToExecute) {}


AForm::AForm(std::string const name, int const gToSign, int const gToExecute) :
    _name(name), _target(name), _isSign(false), _gToSign(gToSign), _gToExecute(gToExecute)
{
    if (_gToSign < 1 || _gToExecute < 1)
        throw TooHighException();
    if (_gToSign > 150 || _gToExecute > 150)
        throw TooLowException();
}

AForm::~AForm(void) throw()
{
    std::cout << "AForm Destructor " << _target << " called" << std::endl;
}

AForm    &AForm::operator=(AForm const &f)
{
    _isSign = f._isSign;
    _target = f._target;
    return *this;
}

std::string AForm::getName(void) const
{
    return _name;
}

bool    AForm::getIsSign(void) const
{
    return _isSign;
}

int AForm::getGradeRequiredToSign(void) const
{
    return _gToSign;
}

int AForm::getGradeRequiredToExecute(void) const
{
    return _gToExecute;
}

void    AForm::beSign(Bureaucrat const &b)
{
    if (b.getGrade() > _gToSign)
        throw TooLowException();
    _isSign = true;
}

void	AForm::setTarget(std::string target)
{
	_target = target;
}

std::string	AForm::getTarget(void) const
{
	return _target;
}

std::ostream &operator<<(std::ostream &o, AForm const &f)
{
    o << "AForm: " << f.getName() << std::endl
    << "Is Sign: " << f.getIsSign() << std::endl
    << "Grade to sign: " << f.getGradeRequiredToSign() << std::endl
    << "Grade to execute: " << f.getGradeRequiredToExecute() << std::endl;
    return o;
}
