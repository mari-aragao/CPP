/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 00:38:01 by maragao           #+#    #+#             */
/*   Updated: 2023/08/12 00:38:01 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include <stdexcept>

class Bureaucrat;

class Form
{
private:
    std::string const   _name;
    bool                _isSign;
    int const           _gToSign;
    int const           _gToExecute;

public:
    Form(void);
    Form(std::string const name, int const gradeToSign, int const gradeToExecute);
    Form(Form const &f);
    virtual ~Form(void) throw();
    Form    &operator=(Form const &f);

    std::string getName(void) const;
    bool        getIsSign(void) const;
    int         getGradeRequiredToSign(void) const;
    int         getGradeRequiredToExecute(void) const;
    void        beSign(Bureaucrat const &b);

    class TooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Form::GradeTooHighException");
        }
    };

    class TooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Form::GradeTooLowException");
        }
    };
};

std::ostream &operator<<(std::ostream &o, Form const &f);

#endif