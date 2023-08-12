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

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    std::string const   _name;
    bool                _isSign;
    int const           _gToSign;
    int const           _gToExecute;

public:
    AForm(void);
    AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
    AForm(AForm const &f);
    virtual ~AForm(void) throw();
    AForm    &operator=(AForm const &f);
    friend std::ostream &operator<<(std::ostream &o, AForm const &f);

    std::string getName(void) const;
    bool        getIsSign(void) const;
    int         getGradeRequiredToSign(void) const;
    int         getGradeRequiredToExecute(void) const;
    void        beSign(Bureaucrat const &b);
    virtual void        execute(Bureaucrat const &executor) const = 0; 

    class TooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("AForm::GradeTooHighException");
        }
    };

    class TooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("AForm::GradeTooLowException");
        }
    };
};
#endif